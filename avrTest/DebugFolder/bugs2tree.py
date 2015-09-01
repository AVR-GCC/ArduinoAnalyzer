
import os
import sys

from pycparser import parse_file, c_parser, c_generator
home = "/home/student/avr/avrTest"
runtimeGcc = "/home/student/avr/avrTest/Utils/csmith-2.2.0/runtime_gcc/"
srcFolder = home + "/FailedCFiles"
workFolder = home + "/DebugFolder"
outFolder = home + "/DebugFolder"
srcFileName = "avrtest.c"
ppFileName = "pp.i"
treeFileName = "tree.txt"

def pp2tree(pp, timestamp):
	srcFile = open(workFolder + "/" +  pp, "r")
	print "pp is open"
	src = ""
	for line in srcFile:
		if line[0] != '#':
			src = src + line
	outFd = open(outFolder + "/" + timestamp + ppFileName, "w")
	outFd.write(src)
	os.system("cp " + srcFolder + "/" + timestamp + "/" + srcFileName + " " + outFolder + "/" + timestamp + srcFileName)
	print timestamp + " done!"
	outFd.close()

def src2tree(dir, timestamp):
	print "prossesing " + timestamp + "..."
	os.system("cp -f " + dir + "/" + srcFileName + " " + workFolder)
	os.system("gcc -E " + workFolder + "/" + srcFileName + " -o " + ppFileName + " -I" + runtimeGcc)
	print "pp ready!"
	pp2tree(ppFileName, timestamp)


for dir in os.listdir(srcFolder):
	src2tree(srcFolder + "/" + dir, dir)

