import os
import sys

avrgcc = "/home/student/avrTest/Utils/avr8-gnu-toolchain-linux_x86/bin/avr-gcc";
simulavr = "/home/student/avrTest/Utils/Simulator/usr/bin/simulavr";
csmith = "/home/student/avrTest/Utils/csmith-2.2.0/"

dev = "atmega328"

runtimeAvr = "-I" + csmith + "runtime_avr";

home = "/home/student/avr/avrTest"
runtimeGcc = "-I" + csmith + "runtime_gcc/"
srcFolder = home + "/DebugFolder/srcWprints/"
workFolder = home + "/DebugFolder/"
outFolder = home + "/DebugFolder/lineMarked/"
gccout = "gccPrintsOut.txt"
gccbin = "gccWprints.o"
avroutsuff = "avrPrintsOut.txt"
avrbinsuff = "Wprints.elf"
tracestring = "trace.txt"
traceDump = 0
RunSafely = csmith + "/scripts/RunSafely.sh 2 1 /dev/null "
opts = ["o0", "o1", "o2", "o3", "os"]

def compileGcc(srcFilePath):
	os.system("rm " + workFolder + gccbin)
	os.system("gcc " + srcFilePath + " -o " + workFolder + gccbin + " " + runtimeGcc)

def compileAvr(srcFilePath, opt, bin):
	os.system("rm " + workFolder + bin)
	os.system(avrgcc + " -" + opt + " -mmcu=" + dev + " " + srcFilePath + " " + runtimeAvr " -o " + workFolder + bin)

def compileFile(srcFilePath, timestamp):
	compileGcc(srcFilePath)
	for opt in [opts]:
		optbin = opt + avrbinsuff
		compileAvr(srcFilePath, opt, optbin)



def simulator(opt, bin):
	simstring = simulavr + " -d " + dev + " -f " + workFolder + bin + " -W0x20," + workFolder + opt + avroutsuff
	if traceDump == 1:
		simstring = simstring + " -t " workFolder + opt + tracestring + " -T  __stop_program"
	os.system(simstring)

def avrDude(opt, bin):
	TODO

def runAvr(simulate, opt, bin):
	if simulate == 1:
		simulator(opt, bin)
	if simulate == 0:
		avrDude(opt, bin)

def runGcc:
	os.system(csmith + RunSafely + workFolder + gccout + " " + workFolder + gccbin)

def runFile:
	runGcc
	for opt in [opts]:
		optbin = opt + avrbinsuff
		runAvr(1, opt, optbin)


def compareResults:
	foundmismatch = 0
	avroutnames = opt + "out.txt" for opt in [opts]
	avrouts = open(workFolder + path, 'r') for path in [avroutnames]
	gccoutfile = open(workFolder + gccout, 'r')
	while foundmismatch == 0:
		avrlines = fd.readLine for fd in avrouts
		gccline = gccoutfile.readLine
		(avrchecksums, avrids) = line.split('I') for line in avrlines
		(gccchecksum, id) = gccline.split('I')
		foundmismatch = nae(avrchecksums, gccchecksum)
	return id
		
def id2num(id):
	return id

def marklineAndSave(lindex, timestamp):
	srcFd = open(srcFolder + timestamp, 'r')
	outFd = open(outFolder + timestamp, 'w+')
	i = 0
	line = srcFd.readline
	while line:
		if(i == lindex):
			outFd.write(preErrorFunc)
		outFd.write(line)
		if(line != '/n'):
			i++



for file in os.listdir(srcFolder):
	compileFile(srcFolder + file, file)
	runFile
	lineId = compareResults(file)
	lineNum = id2num(lineId)
	marklineAndSave(lineNum - 1, file)