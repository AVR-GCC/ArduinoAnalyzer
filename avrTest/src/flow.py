
import os
import sys
import datetime

from pycparser import parse_file, c_parser, c_generator




import command

from util import *

from settings import *
srcFolder = flow_srcFolder 
workFolder = flow_workFolder 
outFolder = flow_outFolder 
srcFilePath = flow_srcFilePath 
gccout = flow_gccout 
gccbin = flow_gccbin 
avroutsuff = flow_avroutsuff 
avrbinsuff = flow_avrbinsuff 


def getTime():
	print "************getTime************"
	now = datetime.datetime.now()
	return now.strftime("%Y%m%d-%H:%M:%S")

def csmithGenerate():
	print "************csmithGenerate************"
	run(csmith + "src/csmith " + csmithOptions + " --output " + workFolder + srcFileName, 1)

def compareResults():
	print "************compareResults************"
	avroutnames = [(opt + avroutsuff) for opt in opts]
	avrouts = [open(workFolder + path, 'r') for path in avroutnames]
	gccoutfile = open(workFolder + gccout, 'r')
	avrlines = [fd.readline() for fd in avrouts]
	gccline = gccoutfile.readline()
	avrlines += [gccline]
	avrlines = [lin.lower() for lin in avrlines]
	return nae(avrlines)

def reportBug(opt):
	timestamp = getTime()
	print "#######################################################################\n"
	print "Differance in checksum found! " + opt + " - report writing to " + FailedCFiles + timestamp + "\n"
	print "#######################################################################\n"
	return timestamp

def saveBug(timestamp):
	print "************saveBug************"
	run("mkdir " + FailedCFiles + timestamp, 1)
	run("cp " + workFolder + gccout + " " + FailedCFiles + timestamp + "/" + gccout, 1)
	run("cp " + workFolder + gccbin + " " + FailedCFiles + timestamp + "/" + gccbin, 1)
	run("cp " + workFolder + srcFileName + " " + FailedCFiles + timestamp + "/" + srcFileName, 1)
	run("cp " + workFolder + srcFileName + " " + cfiles2debug + timestamp + "_" + srcFileName, 1)
	#run("cp " + workFolder + compileOut + " " + FailedCFiles + timestamp + "/" + compileOut, 1)
	for opt in opts:
	    run("cp " + workFolder + opt + avroutsuff + " " + FailedCFiles + timestamp + "/" + opt + avroutsuff, 1)
	    run("cp " + workFolder + opt + avrbinsuff + " " + FailedCFiles + timestamp + "/" + opt + avrbinsuff, 1)


def main(numRuns):
	testsDone = 0
	while testsDone < numRuns or numRuns < 0:
		testsDone = testsDone + 1
		if numRuns != 1:
			print "------------ running test no {} ---------------\n".format(testsDone)
		if(csgen):
			csmithGenerate()
		compileFile(workFolder, srcFilePath, gccbin, avrbinsuff)
		runFile(workFolder, gccbin, gccout, avrbinsuff, avroutsuff)
		foundbug = compareResults()
		if(foundbug):
			timestamp = reportBug(opts[foundbug - 2])
			saveBug(timestamp)
		if numRuns != 1:
			print "------------ finished running test no {} ---------------\n".format(testsDone)
		

if __name__ == '__main__':
	if len(sys.argv) == 2:
		main(int(sys.argv[1]))
	else:
		main(-1)

