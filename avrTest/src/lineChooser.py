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

#Example of run:
#srcF = "/home/student/avr/avrTest/FailedCFiles/20150825-16:53:56/avrtest.c"
#compileArd(srcF,"O1","alonArd.elf")
#avrDude("O1","alonArd.elf")

def compileArd(opt, bin):
	#needs root permissions!
	run("rm " + workFolder + bin, 0)
	#arguments: 1-srcFile,  2-opt flag,3-device, 4-com, 5-out_file 
	run(ardgcc + " " + srcFilePath + " " + opt + " " + devArd + " " + com + " " + workFolder + bin + " " + ard_home + " " + runtime_ard, 1)


def avrDude(opt, bin):
	#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
	run(arddude + " " + workFolder + bin + " " + devArd + " " + com + " " + workFolder + opt + avroutsuff + " " + ard_home, 1)

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
	return int(idgcc.rstrip())
		
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

def marklineAndSave(lindex, timestamp):
	print lindex
	srcFd = open(srcFolder + timestamp, 'r')
	#notInComment = 1
	with open(outFolder + timestamp, "w+") as outFd:
		i = 1
		for line in srcFd:
			#print str(i) + " == " + str(lindex)
			if i == lindex:
				outFd.write(line.rstrip() + " //this line is the problem!!!\n")
				print line.rstrip() + " //this line is the problem!!!\n"
			else:
				outFd.write(line)
			print line + str(i)
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
	run("cp " + workFolder + wp + " " + outFolder + "wp" + timestamp, 0)
	

def addprintsrun(srcPath):
	run("rm " + srcFilePath, 0)
	#run("python " + insertPrints + " " + srcPath + " " + srcFilePath, 1)
	addprints.addprints(srcPath, srcFilePath)

def main():
	for file in os.listdir(srcFolder):
		print "now processing " + file
		addprintsrun(srcFolder + file)
		compileFile(workFolder, srcFilePath, gccbin, avrbinsuff)
		runFile(workFolder, gccbin, gccout, avrbinsuff, avroutsuff)
		lineId = compareResults()
		marklineAndSave(id2lineNum(lineId), file)
		print "************** " + file + " finished and the line is marked in " + outFolder

def secondary(file):
	addprintsrun(srcFolder + file)
	compileFile(workFolder, srcFilePath, gccbin, avrbinsuff)
	runFile(workFolder, gccbin, gccout, avrbinsuff, avroutsuff)
	lineId = compareResults()
	marklineAndSave(id2lineNum(lineId), file)
	print "************** " + file + " finished and the line is marked in " + outFolder


if __name__ == '__main__':
	main()