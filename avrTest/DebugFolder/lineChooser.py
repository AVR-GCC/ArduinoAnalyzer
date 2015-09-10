import os
import sys

avrgcc = "/home/student/avrTest/Utils/avr8-gnu-toolchain-linux_x86/bin/avr-gcc";
simulavr = "/home/student/avrTest/Utils/Simulator/usr/bin/simulavr";
csmith = "/home/student/avrTest/Utils/csmith-2.2.0/"

dev = "atmega328"

runtimeAvr = "-I" + csmith + "runtime_avr";

home = "/home/student/publicWork/avrTest"
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
opts = ["O0", "O1", "O2", "O3", "Os"]
dude =0

devArd = "atmega328p"
com = "/dev/ttyUSB0"
ardgcc = "sudo bash /home/student/avr/avrTest/alon_dev/arduino_compile.cmd"
arddude = "sudo bash /home/student/avr/avrTest/alon_dev/arduino_dude.cmd"

#Example of run:
#srcF = "/home/student/avr/avrTest/FailedCFiles/20150825-16:53:56/avrtest.c"
#compileArd(srcF,"O1","alonArd.elf")
#avrDude("O1","alonArd.elf")


#copyed
def nae(optouts):
	print "************nae************/n"
	found = 0
	i = 0
	res = 0
	for out in optouts:
		i = i + 1
		if (out != optouts[0]):
			if(found == 0):
				res = i
				found = 1
		else:
			notGcc = 1
	if(notGcc == 0):
		return 1
	return res

#copyed
def run(cmd, exitOnFail):
	print("running " + cmd + "\n")
	out = os.system(cmd)
	if(out != 0):
		print "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" + cmd + "\nFAILED\n" + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"      
		if(exitOnFail):
			print "exiting...\n"
			sys.exit()


#copyed
def compileGcc(srcFilePath):
	print "************compileGcc************/n"
	run("rm " + workFolder + gccbin, 0)
	run("gcc " + srcFilePath + " -o " + workFolder + gccbin + " " + runtimeGcc, 1)

#copyed
def compileAvr(srcFilePath):
	print "************compileAvr************/n"
	for opt in opts:
		bin = opt + avrbinsuff
		compileOpt(opt, bin, srcFilePath)


def compileOpt(opt, bin, srcFilePath):
	print "************compileOpt************/n"
	run("rm " + workFolder + bin, 0)
	run(avrgcc + " -" + opt + " -mmcu=" + dev + " " + srcFilePath + " " + runtimeAvr + " -o " + workFolder + bin, 1)


#copyed
def compileFile(srcFilePath):
	print "************compileFile************/n"
	compileGcc(srcFilePath)
	compileAvr(srcFilePath)

#copyed
def simulator(opt, bin):
	print "************simulator************/n"
	simstring = simulavr + " -d " + dev + " -f " + workFolder + bin + " -W0x20," + workFolder + opt + avroutsuff
	if traceDump == 1:
		simstring = simstring + " -t " + workFolder + opt + tracestring + " -T  __stop_program"
	run(simstring, 1)

#copyed
def runAvr(simulate, opt, bin):
	print "************runAvr************/n"
	if simulate == 1:
		simulator(opt, bin)
	if simulate == 0:
		avrDude(opt, bin)

#copyed
def runGcc():
	print "************runGcc************/n"
	run(workFolder + gccbin + " " + workFolder + gccout, 1)

#copyed
def runFile():
	print "************runFile************/n"
	runGcc()
	for opt in opts:
		optbin = opt + avrbinsuff
		runAvr(1, opt, optbin)

def compileArd(srcFilePath, opt, bin):
	#needs root permissions!
	run("rm " + workFolder + bin, 0)
	#arguments: 1-srcFile,  2-opt flag,3-device, 4-com, 5-out_file 
	run(ardgcc + " " + srcFilePath + " " + opt + " " + devArd + " " + com + " " + workFolder + bin, 1)


def avrDude(opt, bin):
	#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
	run(arddude + " " + workFolder + bin + " " + devArd + " " + com + " " + workFolder + opt + avroutsuff, 1)

def compareResults():
	foundmismatch = 0
	avroutnames = [opt + "out.txt" for opt in opts]
	avrouts = [open(workFolder + path, 'r') for path in avroutnames]
	gccoutfile = open(workFolder + gccout, 'r')
	while foundmismatch == 0:
		avrlines = [fd.readline() for fd in avrouts]
		gccline = gccoutfile.readline()
		(avrchecksums, avrids) = [line.split('$') for line in avrlines]
		(gccchecksum, id) = gccline.split('$')
		foundmismatch = nae(avrchecksums, gccchecksum)
	return id
		
def id2lineNum(id):
	i = 0
	idstr = "print" + id + "("
	srcFd = open(srcFilePath, 'r')
	line = srcFd.readline()
	while line:
		if idstr in line:
			return i
		i = i + 1
		pass
	return -1

def marklineAndSave(lindex, timestamp):
	srcFd = open(srcFolder + timestamp, 'r')
	outFd = open(outFolder + timestamp, 'w+')
	i = 0
	line = srcFd.readline()
	while line:
		if(i == lindex):
			outFd.write(preErrorFunc)
		outFd.write(line)
		i = i + 1
	srcFd.close()
	outFd.close()


for file in os.listdir(srcFolder):
	compileFile(srcFolder + file)
	runFile()
	lineId = compareResults()
	marklineAndSave(id2lineNum(lineId), file)