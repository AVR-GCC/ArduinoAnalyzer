import os
import sys


from settings import *

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
def compileGcc():
	print "************compileGcc************/n"
	run("rm " + workFolder + gccbin, 0)
	run("gcc " + srcFilePath + " -o " + workFolder + gccbin + " " + runtimeGcc, 1)

#copyed
def compileAvr():
	print "************compileAvr************/n"
	for opt in opts:
		bin = opt + avrbinsuff
		compileOpt(opt, bin)


def compileOpt(opt, bin):
	print "************compileOpt************/n"
	run("rm " + workFolder + bin, 0)
	run(avrgcc + " -" + opt + " -mmcu=" + dev + " " + srcFilePath + " " + runtimeAvr + " -o " + workFolder + bin, 1)


#copyed
def compileFile():
	print "************compileFile************/n"
	compileGcc()
	compileAvr()

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
	run(workFolder + gccbin + " > " + workFolder + gccout, 1)

#copyed
def runFile():
	print "************runFile************/n"
	runGcc()
	for opt in opts:
		optbin = opt + avrbinsuff
		runAvr(1, opt, optbin)

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
	while gccline != 0 and foundmismatch == 0:
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
	return idgcc.rstrip()
		
def id2lineNum(idgcc):
	i = 0
	foundFirst = 0
	print type(idgcc)
	idstr1 = "print" + idgcc + "(";
	idstr = idstr1
	print idstr
	srcFd = open(srcFilePath, 'r')
	for line in srcFd:
		print line
		if (idstr in line):
			print idstr
			if foundFirst == 1:
				return i
			foundFirst = foundFirst + 1
		i = i + 1
		pass
	return -1

def marklineAndSave(lindex, timestamp):
	print lindex
	srcFd = open(srcFolder + timestamp, 'r')
	notInComment = 1
	with open(outFolder + timestamp, "w+") as outFd:
		i = 0
		for line in srcFd:
			if(i == lindex):
				outFd.write(preErrorFunc)
				print preErrorFunc
			outFd.write(line)
			print line
			if('/*' in line):
				notInComment = 0
			if('*/' in line):
				notInComment = 1
				if('/*' not in line):
					i = i - 1
			if(notInComment == 0):
				print "---------- this line is in a comment ----------"
			if(notInComment and line.strip()):
				i = i + 1
				print "line counted " + str(i)
	srcFd.close()
	

def addprints(srcPath):
	run("rm " + srcFilePath, 0)
	run("python " + insertPrints + " " + srcPath + " " + srcFilePath, 1)

for file in os.listdir(srcFolder):
	addprints(srcFolder + file)
	compileFile()
	runFile()
	lineId = compareResults()
	marklineAndSave(id2lineNum(lineId), file)
	print "************** " + file + " finished and the line is marked in " + outFolder
