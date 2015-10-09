
import os
import sys
import datetime

from pycparser import parse_file, c_parser, c_generator




import command



from settings import *
srcFolder = flow_srcFolder 
workFolder = flow_workFolder 
outFolder = flow_outFolder 
srcFilePath = flow_srcFilePath 
gccout = flow_gccout 
gccbin = flow_gccbin 
avroutsuff = flow_avroutsuff 
avrbinsuff = flow_avrbinsuff 

#copyed
def nae(optouts):
	print "************nae************"
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
	#out = os.system(cmd)
	command1 = command.Command(cmd)
	out = command1.run(timeout=5)
	if(out != 0):
		print "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" + cmd + "\n\t\t\tFAILED\n" + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"      
		if(exitOnFail):
			print "exiting...\n"
			sys.exit()

def getTime():
	print "************getTime************"
	now = datetime.datetime.now()
	return now.strftime("%Y%m%d-%H:%M:%S")

def csmithGenerate():
	print "************csmithGenerate************"
	run(csmith + "src/csmith " + csmithOptions + " --output " + workFolder + srcFileName, 1)

#copyed
def compileGcc():
	print "************compileGcc************"
	run("rm " + workFolder + gccbin, 0)
	run("gcc " + srcFilePath + " -o " + workFolder + gccbin + " " + runtimeGcc, 1)

#copyed
def compileAvr():
	print "************compileAvr************"
	for opt in opts:
		bin = opt + avrbinsuff
		compileOpt(opt, bin)


def compileOpt(opt, bin):
	print "************compileOpt************"
	run("rm " + workFolder + bin, 0)
	run(avrgcc + " -" + opt + " -mmcu=" + dev + " " + srcFilePath + " " + runtimeAvr + " -o " + workFolder + bin, 1)


#copyed
def compileFile():
	print "************compileFile************"
	compileGcc()
	compileAvr()

#copyed
def simulator(opt, bin):
	print "************simulator************"
	simstring = simulavr + " -d " + dev + " -f " + workFolder + bin + " -W0x20," + workFolder + opt + avroutsuff
	if traceDump == 1:
		simstring = simstring + " -t " + workFolder + opt + tracestring
	simstring = simstring + " -T  __stop_program"
	run(simstring, 1)

#copyed
def runAvr(simulate, opt, bin):
	print "************runAvr************"
	if simulate == 1:
		simulator(opt, bin)
	if simulate == 0:
		avrDude(opt, bin)

#copyed
def runGcc():
	print "************runGcc************"
	run(workFolder + gccbin + " > " + workFolder + gccout, 1)

#copyed
def runFile():
	print "************runFile************"
	runGcc()
	for opt in opts:
		optbin = opt + avrbinsuff
		runAvr(1, opt, optbin)

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
	#run("cp " + workFolder + compileOut + " " + FailedCFiles + timestamp + "/" + compileOut, 1)
	for opt in opts:
	    run("cp " + workFolder + opt + avroutsuff + " " + FailedCFiles + timestamp + "/" + opt + avroutsuff, 1)
	    run("cp " + workFolder + opt + avrbinsuff + " " + FailedCFiles + timestamp + "/" + opt + avrbinsuff, 1)


def main(numRuns):
	testsDone = 0
	while testsDone < numRuns or numRuns < 0:
		testsDone = testsDone + 1
		print "------------ running test no {} ---------------\n".format(testsDone)
		if(csgen):
			csmithGenerate()
		compileFile()
		runFile()
		foundbug = compareResults()
		if(foundbug):
			timestamp = reportBug(opts[foundbug - 2])
			saveBug(timestamp)
		print "------------ finished running test no {} ---------------\n".format(testsDone)
		

if __name__ == '__main__':
	main(-1)


