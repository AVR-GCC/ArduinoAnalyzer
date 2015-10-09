import cmd
import os
import catagorize
from settings import *
import flow
import lineChooser

class Console(cmd.Cmd):
	
	
## Aesthetics
	prompt = '$: '
	intro = "AVR-GCC bug seeker - an interactive tool for testing avr C tools \
	\ncompile_run_* - testing a given .c file. \nflow_run_* - generates, compiles & runs on the varios platforms\
	\ncatagorize_* - minority report reports\nlineChooser_* - builds a new destilted version of the code that represents the same bug\
	\ntype \'help\' for more information,\ntype \'exit\' to exit"

	doc_header = 'Commands'
	undoc_header = 'Commands with out help'
	ruler = '-'
## general use
	def do_exit(self, line):
		"Exit console"
		print "bye."
		return True
	
	def do_EOF(self, line):
		"Exit console"
		print "bye."
		return True

	def do_help(self, line):
		"Help - type \'help <cmd>\' for more info"
		return cmd.Cmd.do_help(self,line)

	def do_shell(self, line):
		"Run a shell command"
		print "running shell command:", line
		output = os.popen(line).read()
		print output

## Utilities
	#compile & run - gcc/avr/ard w/ opt flags input_file output_file
	def do_compile_run_gcc(self, line):
		"compiles using GCC & runs program, [usage] compile_run_gcc <opt_flag> <.c file> <out.txt file>"
		#TODO call gcc-compile
		#TODO call gcc-run

	def do_compile_run_avr(self, line):
			"compiles using AVR-GCC & runs simlavr, [usage] compile_run_avr <opt_flag> <.c file> <out.txt file>"
		#TODO call avr-compile
		#TODO call avr-run

	def do_compile_run_arduino(self, line):
			"compiles using arduino_compile & uploads using arduino_dude, [usage] compile_run_gcc <opt_flag> <.c file> <out.txt file>"
		#TODO call ard-compile
		#TODO call ard-run

## Flow
	#run once
	def do_flow_run_once(self, line):
		"runs flow for 1 iteration, [usage] flow_run_once"
		Console.do_flow_run_n(self, "1");

	#run n times
	def do_flow_run_n(self, line):
		"runs flow for # iterations, [usage] flow_run_n #"
		if line:
			if line.isdigit():
				os.system("python " + flow_run + " " + line)
				return
		print "input not digit"
	#run indefenatly
	def do_flow_run_inf(self, line):
		"runs flow indefenatly, [usage] flow_run_inf"
		testNum = 1
		while 1:
			print "=================== starting test number {} ===================".format(testNum)
			Console.do_flow_run_once(self, line)
			print "=================== finished test number {} ===================".format(testNum)
			testNum = testNum + 1

## Debug
	#catagorize
	def do_catagorize_failedCFiles(self, line):
		"analizes FailedCfiles results & reports histogram of minorities, [usage] catagorize_failedCFiles <path_to_failedCFiles>"
		if not line:
			line = FailedCFiles
		catagorize.catagorizeFailedCFiles(line)
	
	#catagorize_specific
	def do_catagorize_specific(self, line):
		"analizes specific .c file results & reports the most different run, [usage] catagorize_specific <path_to_failedCFile_specific_directory>"
		if line:
			catagorize.compareCheckSum(line)
	
	#lineChooser specific run
	def do_lineChooser_specific(self, line):
		"analizes specific .c file results & builds a new destilted version of the code that represents the same bug, [usage] lineChooser_specific <path_to_failedCFile_specific_directory>"
		if line:
			lineChooser.secondary(line)
		return
	
	#lineChooser all failed	
	def do_lineChooser_failedCFiles(self, line):
		"analizes FailedCfiles results & build a new destilted version of the codes that represents the same bugs, [usage] lineChooser_failedCFiles"
		lineChooser.main()



if __name__ == '__main__':
	Console().cmdloop()

