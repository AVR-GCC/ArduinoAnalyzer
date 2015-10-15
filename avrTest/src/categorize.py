
# *****************************************************************
# **                                                             **
# **  ======***=== AVR-GCC bug seeker ===***======               **
# **                                                             **
# **  an interactive tool for testing avr C tools                **
# **                   categorize.py:                            **
# ** creates a minority report for failed c files.               **
# ***************************************************************** 


import sys
import os
import operator

def main(argv):
	catagorizeFailedCFiles(argv[1])

def catagorizeFailedCFiles(dirname):
	#Catagorizes the failed runs by the most different run
	#writes result to each folder & reports histogram

	#dirname should point to FailedCFiles
	BINS = dict()
	#foreach run
	if not os.path.isdir(dirname):
		print "directory not found: " + dirname
		return -1

	for f in os.listdir(dirname):
		fileName = os.path.join(dirname, f)
		if os.path.isdir(fileName):
			#print fileName
			curr = compareCheckSum(fileName)
			if not (BINS.has_key(curr)):
				BINS[curr]=0
			BINS[curr] += 1
	print "minority report written to each folder: compareCheckSum.rpt \
(first line - most different file, secondline verbose report)"
	print "minority histogram:"
	for f in BINS.iterkeys():
		print f+": "+str(BINS[f])

def compareCheckSum (dirname):
	#given a directory - search for the minority checkums
	A = dict()
	B = dict()

	if not os.path.isdir(dirname):
		print "directory not found: " + dirname
		return -1

	for f in os.listdir(dirname):
		fileName = os.path.join(dirname, f)
		if os.path.isfile(fileName):
			#print fileName
			if ((fileName.find("out.txt")!=-1) & (fileName.find("_out.txt")==-1)):
				#this is a checksum file
				fd = open(fileName,"r")
				line = fd.readline()
				fd.close()
				if (line==""):
					#means run didn't complete.
					line = "checksum = DEADDEAD"
				line = line.split(" = ")[1].lower().splitlines()[0]
				A[f] = line
	#go over result & find the minorites
	verbose = ""
	for f in A.iterkeys():
		diff = 0
		for f_other in A.iterkeys():
				diff += (int(A[f],16) != int(A[f_other],16))
		B[f] = diff
		verbose += f + ":" + str(B[f]) + ", "
	
	maxDiffFile = max(B.iteritems(), key=operator.itemgetter(1))[0]
	#print maxDiffFile
	fd = open(os.path.join(dirname, "compareCheckSum.rpt"),"w")
	fd.write(maxDiffFile+"\n")
	fd.write(verbose)
	fd.write("\n")

	fd.close()
	return maxDiffFile

		
	




if __name__ == "__main__":
	sys.exit(main(sys.argv))