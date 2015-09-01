#!/usr/bin/perl -w
##
## Copyright (c) 2011 The University of Utah
## All rights reserved.
##
## This file is part of `csmith', a random generator of C programs.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions are met:
##
##   * Redistributions of source code must retain the above copyright notice,
##     this list of conditions and the following disclaimer.
##
##   * Redistributions in binary form must reproduce the above copyright
##     notice, this list of conditions and the following disclaimer in the
##     documentation and/or other materials provided with the distribution.
##
## THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
## AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
## IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
## ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
## LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
## CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
## SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
## INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
## CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
## ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
## POSSIBILITY OF SUCH DAMAGE.

use strict;
use Time::HiRes;
use File::stat;

## This is a simple tester for Csmith itself.

#######################################################################

my $avrgcc = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/avr8-gnu-toolchain-linux_x86/bin/avr-gcc";
my $simulavr = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/Simulator/usr/bin/simulavr";
my $csmith = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0/src/csmith";

my $FailedCFiles = "~/Desktop/avrTest/FailedCFiles";
my $WorkFolder = "/specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/DebugFolder";
my $CSMITH_HOME = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0";

my $DEV = "atmega328";

# my $avrCOMPILER = "$avrgcc -g -w";
my $avrCOMPILER = "$avrgcc -g";
my $gccCOMPILER = "gcc";

my $avrHEADER = "-I${CSMITH_HOME}/runtime_avr";
my $gccHEADER = "-I${CSMITH_HOME}/runtime_gcc";


my $Golden = "O0";
my $EXTRA_OPTIONS = 0;

#my $RUN_PROGRAM = 0;
my $RUN_PROGRAM = 1;

my $compileOut="compile_out.txt";
my $RUN_GCC = 1;
#my $RUN_GCC = 0;

my $cmd;

#######################################################################


#RUN CMD
sub runit ($$) {
    # properly parse the return value from system()
    my ($cmd, $out) = @_;
    print "about to run '$cmd'\n";
    my $res = system "$cmd";
    my $exit_value  = $? >> 8;
    $exit_value = $? & 127 if ($? & 127);
    return $exit_value;
}


my $n_good = 0;

sub getLoggingTime {

    my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst)=localtime(time);
    my $nice_timestamp = sprintf ( "%04d%02d%02d-%02d:%02d:%02d",
                                   $year+1900,$mon+1,$mday,$hour,$min,$sec);
    return $nice_timestamp;
}










#EACH TEST ROUTINE
sub run_test () {
    my $cfile = "avrtest.c";
    my $ofile = "avrtest.elf";
    my $res;
#    if($EXTRA_OPTIONS ne 'c'){
#    my $res;
      
# 
#       #######################################################################
#       ##		C SMITH CODE GENETRATION			   ##
#       #######################################################################
#       #Yakov's flags
# 	#--no-argc --no-arrays --no-bitfields --no-checksum \
# 	#				   --no-comma-operators --no-compound-assignment --no-consts --no-divs \
# 	#				   --no-longlong --no-float --no-math64 --max-array-dim 1 --max-array-len-per-dim 3 \
# 	#                                   --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 \
# 	#                                   --max-funcs 2 --max-struct-fields 2 --max-union-fields 2
#       my $CSMITH_OPTIONS = " --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs ";
# 	$CSMITH_OPTIONS .= " --max-array-dim 2 --max-array-len-per-dim 8 ";
#         $CSMITH_OPTIONS .= " --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 ";
#         $CSMITH_OPTIONS .= " --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 ";
# 
# #Alon's aditional flags      $CSMITH_OPTIONS .= "  --no-volatiles --no-volatile-pointers --no-const-pointers --no-unions --no-safe-math";
#       my $cmd_csmith = "$CSMITH_HOME/src/csmith $CSMITH_OPTIONS --output $WorkFolder/$cfile";
#       my $res = runit ($cmd_csmith, "csmith.out"); 
#       
#       if ($res != 0 ) {
# 	print "Failed to run csmith $cmd_csmith\n";
# 	exit (-1);
#       } 
#      }
#     my $res = 0;
#     if (($EXTRA_OPTIONS eq 'c') && !(-f $WorkFolder/$cfile) ) {
# 	print "Failed to find cfile (save as avrtest.c)\n";
# 	exit (-1);
#     } 
   
    
      #######################################################################
      ##		COMPILE ON GCC + RUN				   ##
      #######################################################################
    if($RUN_GCC){
    	my $cmd_gcc = "$gccCOMPILER $WorkFolder/$cfile $gccHEADER -o $WorkFolder/gcc$ofile";
	$res = runit ($cmd_gcc, "csmith.out"); 
	if ($res != 0 || !(-f "$WorkFolder/gcc$ofile")) {
	    print "GCC failed to compile program generated by $cmd_gcc\n";
	    exit (-1);
	}	    
	my $cmd_gcc_run = "$CSMITH_HOME/scripts/RunSafely.sh 2 1 /dev/null $WorkFolder/gccout.txt $WorkFolder/gcc$ofile";
	#my $cmd_gcc_run = "$WorkFolder/gcc$ofile > $WorkFolder/gccout.txt";
	$res = runit ($cmd_gcc_run, "out2.txt");
	if ($res != 0 && $res != 137) {
	    print "x86 code died with error code $res\n";
	    exit (-1);
	}
	if ($res == 137) {
	    print "Timed out.\n";
	    return;
	}
    }
    
      #######################################################################
      ##		COMPILE ON AVR GCC 				   ##
      #######################################################################
    foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
      system "grep Seed $WorkFolder/$cfile";
      system "ls -l $WorkFolder/$cfile";
      system "rm -f $WorkFolder/$OPT$ofile";
      my $cmd_avr = "$avrCOMPILER -$OPT -mmcu=$DEV $WorkFolder/$cfile $avrHEADER -o $WorkFolder/$OPT$ofile";
      $res = runit ($cmd_avr, "csmith.out"); 
      if ($res != 0 ) {
	  print "Failed to compile program generated by $cmd_avr\n";
	  exit (-1);
      }	    
    
      #######################################################################
      ##		    RUN ON SIMULATOR 				   ##
      #######################################################################
      if ($RUN_PROGRAM) {
	my $cmd_sim = "$CSMITH_HOME/scripts/RunSafely.sh 2 1 /dev/null $WorkFolder/out.txt ";
	  $cmd_sim .= "$simulavr -d $DEV -f $WorkFolder/$OPT$ofile -W0x20,- -t $WorkFolder/trace_dump.txt -T  __stop_program";
	  $res = runit ($cmd_sim, "sim.txt");
	  if ($res != 0 && $res != 137) {
	      print "Compiled random program died with error code $res\n";
	      exit (-1);
	  }
	  if ($res == 137) {
	      print "Timed out.\n";
	      return;
	  }
      }
    }
    
    
#     
#       #######################################################################
#       ##		     COMPARE RESULTS				   ##
#       #######################################################################
#     if ($RUN_GCC) {
# 	
# 	foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
# 	  my $cmd_diff = "diff -i $WorkFolder/${OPT}avrout.txt $WorkFolder/gccout.txt";
# 	  $res = runit ($cmd_diff, "compare.out");
# 	  if($res != 0){
# 	    my $timestamp = getLoggingTime();
# 	    print "#######################################################################\n";
# 	    print "Differance in checksum found! ${OPT} - report written to $FailedCFiles/$timestamp\n";
# 	    print "#######################################################################\n";
# 	    system "mkdir $FailedCFiles/$timestamp";
# 	    
# 	    system "cp $WorkFolder/gccout.txt $FailedCFiles/$timestamp/gccout.txt";
# 	    system "cp $WorkFolder/$cfile $FailedCFiles/$timestamp/$cfile";
# 	    system "cp $WorkFolder/gcc$ofile $FailedCFiles/$timestamp/gcc$ofile";
#       system "cp $WorkFolder/$compileOut $FailedCFiles/$timestamp/$compileOut";
#       foreach my $OPTI (("O0", "O1", "O2", "O3", "Os")){
# 	      system "cp $WorkFolder/${OPTI}avrout.txt $FailedCFiles/$timestamp/${OPTI}avrout.txt";
# 	      system "cp $WorkFolder/$OPTI$ofile $FailedCFiles/$timestamp/$OPTI$ofile";
#       }
#       last;
# 
# 	  }
# 	}
#     }
#     else {
#       foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
# 	      my $cmd_diff = "diff -i ${OPT}avrout.txt ${Golden}avrout.txt";
# 	      $res = runit ($cmd_diff, "compare.out");
# 	      if($res != 0){
#            my $timestamp = getLoggingTime();
#  	         print "#######################################################################\n";	   
#            print "Differance in checksum found! ${OPT} - report written to $FailedCFiles/$timestamp\n";
# 	         print "#######################################################################\n";
#            system "mkdir $FailedCFiles/$timestamp";
#            system "cp $WorkFolder/${Golden}avrout.txt $FailedCFiles/$timestamp/${Golden}avrout.txt";
#            system "cp $WorkFolder/$compileOut $FailedCFiles/$timestamp/$compileOut";
#            system "cp $WorkFolder/gcc$ofile $FailedCFiles/$timestamp/gcc$ofile";
#            system "cp $WorkFolder/$cfile $FailedCFiles/$timestamp/$cfile";
#            system "cp $WorkFolder/$compileOut $FailedCFiles/$timestamp/$compileOut";
#            foreach my $OPTI (("O0", "O1", "O2", "O3", "Os")){
# 	            system "cp $WorkFolder/${OPTI}avrout.txt $FailedCFiles/$timestamp/${OPTI}avrout.txt";
# 	            system "cp $WorkFolder/$OPTI$ofile $FailedCFiles/$timestamp/$OPTI$ofile";
#            }
#            last;
# 	      }
# 	    }
#     }
#     
    $n_good++;
    print "finished with test case $n_good.\n\n";
}

#RUN cnt TESTS
sub run_tests ($) {
    (my $n_tests) = @_;
    while ($n_tests == -1 || $n_good < $n_tests) {
	run_test ();
    }
}

########################### main ##################################


if (!(-f "$CSMITH_HOME/runtime/csmith.h")) {
    print "Please point the environment variable CSMITH_HOME to the top-level\n";
    print "directory of your Csmith tree before running this script.\n";
    exit(-1);
}

my $cnt = $ARGV[0];
$cnt = 1 if (!defined($cnt));
$EXTRA_OPTIONS = 1 if (!defined($cnt));
$EXTRA_OPTIONS = $ARGV[1] if (@ARGV==2);
print "extra = $EXTRA_OPTIONS\n";
print "bar";
run_tests ($cnt);

##################################################################
