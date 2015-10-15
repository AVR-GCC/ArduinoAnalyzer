
# *****************************************************************
# **                                                             **
# **  ======***=== AVR-GCC bug seeker ===***======               **
# **                                                             **
# **  an interactive tool for testing avr C tools                **
# **                   settings.py:                              **
# ** utility functions such as compile file, run file and run    **
# ** command.                                                    **
# ***************************************************************** 


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
		out = thrd.run(timeout=10)
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
	run("gcc " + "-w " + sfp + " -o " + wf + gccb + " " + runtimeGcc, 1)

def compileAvr(wf, sfp, avrbs):
	print "************compileAvr************"
	for opt in opts:
		bin = opt + avrbs
		compileOpt(opt, bin, wf, sfp)


def compileOpt(opt, bin, wf, sfp):
	print "************compileOpt************"
	run("rm -f " + wf + bin, 0)
	run(avrgcc +" -w " + " -" + opt + " -mmcu=" + dev + " " + sfp + " " + runtimeAvr + " -o " + wf + bin, 1)

def compileFile(wf, sfp, gccb, avrbs):
	print "************compileFile************"
	compileGcc(wf, sfp, gccb)
	compileAvr(wf, sfp, avrbs)

def simulator(opt, bin, wf, avros, runSafely):
	print "************simulator************"
	simstring = simulavr + " -d " + dev + " -f " + wf + bin + " -W0x20," + wf + opt + avros
	if traceDump == 1:
		simstring = simstring + " -t " + wf + opt + tracestring
	simstring = simstring + " -T  __stop_program"
	run(simstring, 0, runSafely)

def runAvr(simulate, opt, bin, wf, avros, runSafely):
	print "************runAvr************"
	if simulate == 1:
		simulator(opt, bin, wf, avros, runSafely)
	if simulate == 0:
		avrDude(opt, bin, wf, avros)

def runGcc(wf, gccb, gcco, runSafely):
	print "************runGcc************"
	run(wf + gccb + " > " + wf + gcco, 1, runSafely)

def runFile(wf, gccb, gcco, avrbs, avros, runSafely):
	print "************runFile************"
	runGcc(wf, gccb, gcco, runSafely)
	for opt in opts:
		optbin = opt + avrbs
		runAvr(1, opt, optbin, wf, avros, runSafely)


def compileArd(opt, bin, wf, sfp):
	#needs root permissions!
	run("rm -f " + wf + bin, 0)
	#arguments: 1-srcFile,  2-opt flag,3-device, 4-com, 5-out_file 
	run(ardgcc + " " + sfp + " " + opt + " " + devArd + " " + com + " " + wf + bin + " " + ard_home + " " + runtime_ard, 1,0)

def avrDude(opt, bin, wf, avros):
	#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
	run(arddude + " " + wf + bin + " " + devArd + " " + com + " " + wf + opt + avros + " " + ard_home, 1,0)
