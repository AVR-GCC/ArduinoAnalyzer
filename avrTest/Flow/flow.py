
import os
import sys
import datetime

from pycparser import parse_file, c_parser, c_generator
home = "/home/student/avr/avrTest"
runtimeGcc = "/home/student/avr/avrTest/Utils/csmith-2.2.0/runtime_gcc/"
srcFolder = home + "/FailedCFiles"
workFolder = home + "/DebugFolder"
outFolder = home + "/DebugFolder"
srcFileName = "avrtest.c"



csmithOptions = " --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs "
csmithOptions = csmithOptions + " --max-array-dim 2 --max-array-len-per-dim 8 "
csmithOptions = csmithOptions + " --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 "
csmithOptions = csmithOptions + " --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 "

#Alon's aditional flags      $CSMITH_OPTIONS .= "  --no-volatiles --no-volatile-pointers --no-const-pointers --no-unions --no-safe-math";



#copyed
def nae(optouts):
	found = 0
	i = 0
	res = 0
	for out in optouts:
		i++
		if (out != optouts[0]):
			if(!found):
				res = i
				found = 1
		else:
			notGcc = 1
	if(!notGcc):
		return 1
	return res

#copyed
def run(cmd, exitOnFail):
	print("running " + cmd + "\n")
	out = os.system(cmd)
	if(!out):
		print "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" + cmd + "\nFAILED\n" + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"      
		if(exitOnFail):
			print "exiting...\n"
			sys.exit()

def getTime:
	now = datetime.datetime.now()
	return now.strftime("%Y|%m|%d-%H:%M:%S")

def csmithGenerate:
	run(csmithHome + "src/csmith " + csmithOptions + " --output " + workFolder + srcFileName, 1)

#copyed
def compileGcc(srcFilePath):
	run("rm " + workFolder + gccbin)
	run("gcc " + srcFilePath + " -o " + workFolder + gccbin + " " + runtimeGcc)

#copyed
def compileAvr(srcFilePath, opt, bin):
	run("rm " + workFolder + bin)
	run(avrgcc + " -" + opt + " -mmcu=" + dev + " " + srcFilePath + " " + runtimeAvr " -o " + workFolder + bin)

#copyed
def compileFile(srcFilePath):
	compileGcc(srcFilePath)
	for opt in [opts]:
		optbin = opt + avrbinsuff
		compileAvr(srcFilePath, opt, optbin)

#copyed
def simulator(opt, bin):
	simstring = simulavr + " -d " + dev + " -f " + workFolder + bin + " -W0x20," + workFolder + opt + avroutsuff
	if traceDump == 1:
		simstring = simstring + " -t " workFolder + opt + tracestring + " -T  __stop_program"
	run(simstring)

#copyed
def runAvr(simulate, opt, bin):
	if simulate == 1:
		simulator(opt, bin)
	if simulate == 0:
		avrDude(opt, bin)

#copyed
def runGcc:
	run(csmith + RunSafely + workFolder + gccout + " " + workFolder + gccbin)

#copyed
def runFile:
	runGcc
	for opt in [opts]:
		optbin = opt + avrbinsuff
		runAvr(1, opt, optbin)

def compareResults:
	avroutnames = opt + "out.txt" for opt in [opts]
	avrouts = open(workFolder + path, 'r') for path in [avroutnames]
	gccoutfile = open(workFolder + gccout, 'r')
	avrlines = fd.readLine() for fd in avrouts
	gccline = gccoutfile.readLine()
	return nae(avrchecksums, gccchecksum)

def reportBug(opt):
	timestamp = getTime()
	print "#######################################################################\n"
	print "Differance in checksum found! " + opt + " - report written to " + FailedCFiles + timestamp + "\n"
	print "#######################################################################\n"
	return timestamp

def saveBug(timestamp):
	run("mkdir " + FailedCFiles + timestamp)
	run("cp " + WorkFolder + gccout + " " + FailedCFiles + timestamp + "/" + gccout)
	run("cp " + WorkFolder + gccbin + " " + FailedCFiles + timestamp + "/" + gccbin)
	run("cp " + WorkFolder + srcFile + " " + FailedCFiles + timestamp + "/" + srcFile)
	run("cp " + WorkFolder + compileOut + " " + FailedCFiles + timestamp + "/" + compileOut)
	for opt in opts:
	    run("cp " + WorkFolder + opt + avroutsuf + " " + FailedCFiles + timestamp + "/" + opt + avroutsuf)
	    run("cp " + WorkFolder + opt + avrbinsuff + FailedCFiles + timestamp + "/" + opt + avrbinsuff)
    
while 1:
	csmithGenerate()
	compileAvr()
	compileGcc()
	runFile
	foundbug = compareResults()
	if(foundbug):
		timestamp = reportBug(opts[foundbug - 1])
		saveBug(timestamp)
	pass