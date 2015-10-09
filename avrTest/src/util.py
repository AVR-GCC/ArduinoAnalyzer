
import os
import sys
import command
from settings import *

def compileAvr():
	print "************compileAvr************"
	for opt in opts:
		bin = opt + avrbinsuff
		compileOpt(opt, bin)

def compileFile():
	print "************compileFile************"
	compileGcc()
	compileAvr()

def compileGcc():
	print "************compileGcc************"
	run("rm " + workFolder + gccbin, 0)
	run("gcc -w " + srcFilePath + " -o " + workFolder + gccbin + " " + runtimeGcc, 1)



def compileOpt(opt, bin):
	print "************compileOpt************"
	run("rm " + workFolder + bin, 0)
	run(avrgcc + " -" + opt + " -mmcu=" + dev + " " + srcFilePath + " " + runtimeAvr + " -o " + workFolder + bin, 1)


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

def runAvr(simulate, opt, bin):
	print "************runAvr************"
	if simulate == 1:
		simulator(opt, bin)
	if simulate == 0:
		avrDude(opt, bin)

def run(cmd, exitOnFail):
	print("running " + cmd + "\n")
	#out = os.system(cmd)
	thrd = command.Command(cmd)
	out = thrd.run(timeout=5)
	if(out != 0):
		print "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" + cmd + "\n\t\t\tFAILED\n" + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"      
		if(exitOnFail):
			print "exiting...\n"
			sys.exit()

def simulator(opt, bin):
	print "************simulator************"
	simstring = simulavr + " -d " + dev + " -f " + workFolder + bin + " -W0x20," + workFolder + opt + avroutsuff
	if traceDump == 1:
		simstring = simstring + " -t " + workFolder + opt + tracestring + " -T  __stop_program"
	simstring = simstring + " -T  __stop_program"
	run(simstring, 1)

def runGcc():
	print "************runGcc************"
	run(workFolder + gccbin + " > " + workFolder + gccout, 1)

def runFile():
	print "************runFile************"
	runGcc()
	for opt in opts:
		optbin = opt + avrbinsuff
		runAvr(1, opt, optbin)