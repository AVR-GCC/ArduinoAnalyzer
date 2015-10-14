
import os
import sys
import command
from settings import *

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

def run(cmd, exitOnFail, runSafely=1):
	print("running " + cmd + "\n")
	#out = os.system(cmd)
	thrd = command.Command(cmd)
	if runSafely:
		out = thrd.run(timeout=5)
	else:
		out = thrd.run(None)
	if(out != 0):
		print "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" + cmd + "\n\t\t\tFAILED\n" + "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"      
		if(exitOnFail):
			print "exiting...\n"
			sys.exit(3)

def compileGcc(wf, sfp, gccb):
	print "************compileGcc************"
	run("rm -f " + wf + gccb, 0)
	run("gcc " + sfp + " -o " + wf + gccb + " " + runtimeGcc, 1)

def compileAvr(wf, sfp, avrbs):
	print "************compileAvr************"
	for opt in opts:
		bin = opt + avrbs
		compileOpt(opt, bin, wf, sfp)


def compileOpt(opt, bin, wf, sfp):
	print "************compileOpt************"
	run("rm -f " + wf + bin, 0)
	run(avrgcc + " -" + opt + " -mmcu=" + dev + " " + sfp + " " + runtimeAvr + " -o " + wf + bin, 1)

def compileFile(wf, sfp, gccb, avrbs):
	print "************compileFile************"
	compileGcc(wf, sfp, gccb)
	compileAvr(wf, sfp, avrbs)

def simulator(opt, bin, wf, avros):
	print "************simulator************"
	simstring = simulavr + " -d " + dev + " -f " + wf + bin + " -W0x20," + wf + opt + avros
	if traceDump == 1:
		simstring = simstring + " -t " + wf + opt + tracestring
	simstring = simstring + " -T  __stop_program"
	run(simstring, 1)

def runAvr(simulate, opt, bin, wf, avros):
	print "************runAvr************"
	if simulate == 1:
		simulator(opt, bin, wf, avros)
	if simulate == 0:
		avrDude(opt, bin, wf, avros)

def runGcc(wf, gccb, gcco):
	print "************runGcc************"
	run(wf + gccb + " > " + wf + gcco, 1)

def runFile(wf, gccb, gcco, avrbs, avros):
	print "************runFile************"
	runGcc(wf, gccb, gcco)
	for opt in opts:
		optbin = opt + avrbs
		runAvr(1, opt, optbin, wf, avros)


def compileArd(opt, bin, wf, sfp):
	#needs root permissions!
	run("rm -f " + wf + bin, 0)
	#arguments: 1-srcFile,  2-opt flag,3-device, 4-com, 5-out_file 
	run(ardgcc + " " + sfp + " " + opt + " " + devArd + " " + com + " " + wf + bin + " " + ard_home + " " + runtime_ard, 1,0)

def avrDude(opt, bin, wf, avros):
	#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
	run(arddude + " " + wf + bin + " " + devArd + " " + com + " " + wf + opt + avros + " " + ard_home, 1,0)
