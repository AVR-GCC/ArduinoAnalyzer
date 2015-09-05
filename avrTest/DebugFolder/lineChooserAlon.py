#BAR - your version is unstable therefore can't run it & add my changes.
#I'm manually uploading my changes
#these are my implementations of the arduino functions - compile & upload+run.

#these are configurations needed to run my procs.
devArd = "atmega328p"
com = "/dev/ttyUSB0"
ardgcc = "sudo bash /home/student/avr/avrTest/alon_dev/arduino_compile.cmd"
arddude = "sudo bash /home/student/avr/avrTest/alon_dev/arduino_dude.cmd"

def compileArd(srcFilePath, opt, bin):
	#needs root permissions!
	os.system("rm " + workFolder + bin)
	#arguments: 1-srcFile,  2-opt flag,3-device, 4-com, 5-out_file 
	os.system(ardgcc + " " + srcFilePath + " " + opt + " " + devArd + " " + com + " " + workFolder + bin)


def avrDude(opt, bin):
	#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
	os.system(arddude + " " + workFolder + bin + " " + devArd + " " + com + " " + workFolder + opt + avroutsuff)

#Example of run:
#srcF = "/home/student/avr/avrTest/FailedCFiles/20150825-16:53:56/avrtest.c"
#compileArd(srcF,"O1","alonArd.elf")
#avrDude("O1","alonArd.elf")
