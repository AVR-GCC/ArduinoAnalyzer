
# *****************************************************************
# **                                                             **
# **  ======***=== AVR-GCC bug seeker ===***======               **
# **                                                             **
# **  an interactive tool for testing avr C tools                **
# **                  lineChooser.py:                            **
# ** periodically takes a c file that has been found to have a   **
# ** bug and chooses the line in which the bug first appeared.   **
# ** to do so it uses utility functions and its own compare      **
# ** function.                                                   **
# ***************************************************************** 

import os
import sys

import addprints

from settings import *

from util import *

srcFolder = lineChooser_srcFolder 
workFolder = lineChooser_workFolder 
outFolder = lineChooser_outFolder 
srcFilePath = lineChooser_srcFilePath 
gccout = lineChooser_gccout 
gccbin = lineChooser_gccbin 
avroutsuff = lineChooser_avroutsuff 
avrbinsuff = lineChooser_avrbinsuff 


def compareResults():
	foundmismatch = 0
	avroutnames = [opt + avroutsuff for opt in opts]
	avrouts = [open(workFolder + path, 'r') for path in avroutnames]
	gccoutfile = open(workFolder + gccout, 'r')
	gccline = "s"
	while gccline.rstrip() != "" and foundmismatch == 0:
		avrlines = [fd.readline() for fd in avrouts]
		gccline = gccoutfile.readline()
		print "----------" + gccline
		if ('$' in gccline):
			avrchecksums = []
			for line in avrlines:
				(x, y) = line.split('$')
				avrchecksums += [x]
			(gccchecksum, idgcc) = gccline.split('$')
			avrchecksums += [gccchecksum]
			foundmismatch = nae(avrchecksums)
			if debug:
				print "DEBUG: nae mismatch opt - {}".format(foundmismatch)
	return int(idgcc.rstrip())

def structFile(fp):
	fd = open(fp, 'r').read()
	return ("struct S0 {" in fd)	

def id2lineNum(idgcc):
	# i = 0
	# foundFirst = 0
	# print type(idgcc)
	# idstr1 = "print" + idgcc + "(";
	# idstr = idstr1
	# print idstr
	# srcFd = open(srcFilePath, 'r')
	# for line in srcFd:
	# 	print line
	# 	if (idstr in line):
	# 		print idstr
	# 		if foundFirst == 1:
	# 			return i
	# 		foundFirst = foundFirst + 1
	# 	i = i + 1
	# 	pass
	return idgcc

def marklineAndSave(lindex, timestamp, sf, of):
	print lindex
	srcFd = open(sf + timestamp, 'r')
	#notInComment = 1
	with open(of + "m"+ timestamp, "w+") as outFd:
		i = 1
		for line in srcFd:
			#print str(i) + " == " + str(lindex)
			if i == lindex:
				outFd.write(line.rstrip() + " //this line is the problem!!!\n")
				print line.rstrip() + " //this line is the problem!!!\n"
			else:
				outFd.write(line)
			if debug:
				print line
			#if('/*' in line):
			#	notInComment = 0
			#if('*/' in line):
			#	notInComment = 1
			#	if('/*' not in line):
			#		i = i - 1
			#if(notInComment and line.strip()):
			i = i + 1
	print lindex
	srcFd.close()
	outFd.close()
	run("cp " + workFolder + wp + " " + of + "wp" + timestamp, 0)
	

def addprintsrun(srcPath):
	run("rm -f " + srcFilePath, 0)
	addprints.addprints(srcPath, srcFilePath)

def main():
	for file in os.listdir(srcFolder):
		if(structFile(srcFolder + file)):
			continue
		print "now processing " + file
		addprintsrun(srcFolder + file)
		compileFile(workFolder, srcFilePath, gccbin, avrbinsuff)
		runFile(workFolder, gccbin, gccout, avrbinsuff, avroutsuff, 1)
		lineId = compareResults()
		marklineAndSave(id2lineNum(lineId), file, srcFolder, outFolder)
		print "************** " + file + " finished and the line is marked in " + outFolder

def secondary(file):
	addprintsrun(file)
	compileFile(workFolder, srcFilePath, gccbin, avrbinsuff)
	runFile(workFolder, gccbin, gccout, avrbinsuff, avroutsuff)
	lineId = compareResults()
	sf=os.path.split(file)[0] + "/"
	file_name=os.path.split(file)[1]
	of=sf
	marklineAndSave(id2lineNum(lineId), file_name, sf, of)
	print "************** " + file + " finished and the line is marked in " + outFolder


if __name__ == '__main__':
	main()