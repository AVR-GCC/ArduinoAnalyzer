import cmd
import os
import catagorize
from settings import *
import flow
import lineChooser
import util
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
		"compiles using GCC & runs program, [usage] compile_run_gcc <.c file>"
		c_path = line.split(" ")[0]
		
		c_dir = os.path.split(c_path)[0] + "/"
		c_file = os.path.split(c_path)[1]

		out_file = "tempgcc.out"
		out_path = os.path.join(c_dir,out_file)
		out_print = 1

		bin_file = "temp.gcc"
		#call gcc-compile
		util.compileGcc(c_dir, c_path, bin_file)
		#call gcc-run
		util.runGcc(c_dir, bin_file, out_file)
		
		if out_print:
			output = os.popen("cat " + out_path).read()
			print output

	def do_compile_run_avr(self, line):
		"compiles using AVR-GCC & runs simlavr, [usage] compile_run_avr <.c file> <opt_flag>"
		c_path = line.split(" ")[0]
		opt_flag = line.split(" ")[1]

		c_dir = os.path.split(c_path)[0] + "/"
		c_file = os.path.split(c_path)[1]

		out_file = "tempavr.out"
		out_path = os.path.join(c_dir,out_file)
		out_print = 1

		bin_file = "temp.avr"
		#call avr-compile
		util.compileOpt(opt_flag, bin_file, c_dir, c_path)
		#call avr-run
		util.runAvr(1, "", bin_file, c_dir, out_file)
		
		if out_print:
			output = os.popen("cat " + out_path).read()
			print output

	def do_compile_run_arduino(self, line):
		"compiles using arduino_compile & uploads using arduino_dude, [usage] compile_run_gcc <.c file> <opt_flag>"
		
		c_path = line.split(" ")[0]
		opt_flag = line.split(" ")[1]

		c_dir = os.path.split(c_path)[0] + "/"
		c_file = os.path.split(c_path)[1]

		out_file = "tempard.out"
		out_path = os.path.join(c_dir,out_file)
		out_print = 1

		bin_file = "temp.ard"
		#call Arduino-compile
		util.compileArd(opt_flag, bin_file, c_dir, c_path)
		#call Arduino-run
		util.runAvr(0, "", bin_file, c_dir, out_file)
		
		if out_print:
			output = os.popen("cat " + out_path).read()
			print output


## Flow
	#run once
	def do_flow_run_once(self, line):
		"runs flow for 1 iteration, [usage] flow_run_once"
		return Console.do_flow_run_n(self, "1");

	#run n times
	def do_flow_run_n(self, line):
		"runs flow for # iterations, [usage] flow_run_n #"
		if line:
			if line.isdigit():
				out = os.system("python " + flow_run + " " + line)
				print out
				return int(out)
		print "input not digit"
	#run indefenatly
	def do_flow_run_inf(self, line):
		"runs flow indefenatly, [usage] flow_run_inf"
		testNum = 1
		bugNum = 0
		failNum = 0
		while 1:
			print "=================== starting test number {} ===================".format(testNum)
			out = Console.do_flow_run_once(self, line)
			#foundBug
			if out==256:
				bugNum = bugNum + 1
			#failed
			if out==768:
				failNum = failNum + 1

			print "=================== finished test number {0}, {1} bugs, {2} failed ===================".format(testNum,bugNum,failNum)
			testNum = testNum + 1
			#ctrl-C
			if out==2:
				break

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

