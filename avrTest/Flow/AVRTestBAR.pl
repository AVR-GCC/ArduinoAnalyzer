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

my $FailedCFiles = "FailedCFiles";
my $CSMITH_HOME = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0";
my $DEV = "atmega128";
my $MIN_PROGRAM_SIZE = 8000;
#my $CSMITH_HOME = $ENV{"CSMITH_HOME"};
my $COMPILER = "$avrgcc -g -w";
my $Golden = "O0";
my $EXTRA_OPTIONS = 0;

#my $VALGRIND = "";
#my $VALGRIND = "valgrind -q --error-exitcode=66 ";

#my $RUN_PROGRAM = 0;
my $RUN_PROGRAM = 1;

my $RUN_GCC = 1;
#my $RUN_GCC = 0;

#my $RUN_SAFELY = $CSMITH_HOME/scripts/RunSafely.sh;
my $RUN_SAFELY = "";
#######################################################################


my $avrHEADER = "-I${CSMITH_HOME}/runtime_avr";
my $gccHEADER = "-I${CSMITH_HOME}/runtime_gcc";

my $cmd;
# properly parse the return value from system()
sub runit ($$) {
    my ($cmd, $out) = @_;
    print "about to run '$cmd'\n";
    my $res = system "$cmd";
    my $exit_value  = $? >> 8;
    $exit_value = $? & 127 if ($? & 127);
    return $exit_value;
}

sub yesno ($) {
    (my $opt) = @_;
    if (rand() < 0.5) {
	return " --$opt ";
    } else {
	return " --no-$opt ";
    }
}

my $n_good = 0;

sub getLoggingTime {

    my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst)=localtime(time);
    my $nice_timestamp = sprintf ( "%04d%02d%02d-%02d:%02d:%02d",
                                   $year+1900,$mon+1,$mday,$hour,$min,$sec);
    return $nice_timestamp;
}

sub run_test () {
    my $cfile = "avrtest.c";
    my $ofile = "avrtest.elf";
    my $ofile_avr = "test_avr.exe";

    #system "rm -f $cfile $ofile $ofile_avr";
    if($EXTRA_OPTIONS ne 'c'){
      system "rm -f $cfile $ofile $ofile_avr";
      my $CSMITH_OPTIONS = "";
      if (rand()<0.5) { $CSMITH_OPTIONS .= " --quiet "; }
      if (rand()<0.5) { $CSMITH_OPTIONS .= " --concise "; }
      $CSMITH_OPTIONS .= yesno ("math64");
      $CSMITH_OPTIONS .= yesno ("paranoid");
      $CSMITH_OPTIONS .= yesno ("longlong");
      $CSMITH_OPTIONS .= yesno ("pointers");
      $CSMITH_OPTIONS .= yesno ("arrays");
      $CSMITH_OPTIONS .= yesno ("jumps");
      $CSMITH_OPTIONS .= yesno ("consts");
      $CSMITH_OPTIONS .= yesno ("volatiles");
      $CSMITH_OPTIONS .= yesno ("volatile-pointers");
      $CSMITH_OPTIONS .= yesno ("checksum");
      $CSMITH_OPTIONS .= yesno ("divs");
      $CSMITH_OPTIONS .= yesno ("muls");
      $CSMITH_OPTIONS .= yesno ("compound-assignment");
      $CSMITH_OPTIONS .= yesno ("structs");
      $CSMITH_OPTIONS .= yesno ("packed-struct");
      $CSMITH_OPTIONS .= yesno ("bitfields");
      $CSMITH_OPTIONS .= yesno ("argc");
      $CSMITH_OPTIONS .= "--no-arrays --no-math64 --no-volatiles --no-volatile-pointers --no-const-pointers --no-unions --no-consts --no-safe-math";
      my $cmd = "$CSMITH_HOME/src/csmith $CSMITH_OPTIONS --output $cfile";
      my $res = runit ($cmd, "csmith.out"); 
      
      if ($res != 0 ) {
	print "Failed to run csmith $cmd\n";
	exit (-1);
      } 
     }
    my $res = 0;
    if (($EXTRA_OPTIONS eq 'c') && !(-f $cfile) ) {
	print "Failed to find cfile (save as avrtest.c)\n";
	exit (-1);
    } 
    
    if($RUN_GCC){
    	my $cmd3 = "gcc $cfile $gccHEADER -o gcc$ofile";
	$res = runit ($cmd3, "csmith.out"); 
	if ($res != 0 || !(-f "gcc$ofile")) {
	    print "GCC failed to compile program generated by $cmd\n";
	    exit (-1);
	}	    
	
	my $cmd4 = "./gcc$ofile > gccout.txt";
	$res = runit ($cmd4, "out2.txt");
	if ($res != 0 && $res != 137) {
	    print "GCC output died with error code $res\n";
	    exit (-1);
	}
	if ($res == 137) {
	    print "Timed out.\n";
	    return;
	}
    }
    foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
      system "grep Seed $cfile";
      system "ls -l $cfile";
      system "rm -f $ofile";
      my $cmd2 = "$COMPILER -$OPT -mmcu=$DEV $cfile $avrHEADER -o $OPT$ofile";
      my $cmdGCCrun = "gcc $cfile $gccHEADER -o gcc$ofile";
      $res = runit ($cmd2, "csmith.out"); 
      if ($res != 0 ) {
	  print "Failed to compile program generated by $res\n";
	  exit (-1);
      }	    
    
      if ($RUN_PROGRAM) {
	  my $cmd3 = "$simulavr -d $DEV -f $OPT$ofile -W0x20,${OPT}avrout.txt";
	  $res = runit ($cmd3, "sim.txt");
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
    if ($RUN_GCC) {
	
	foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
	  my $cmd3 = "diff ${OPT}avrout.txt, gccout.txt";
	  $res = runit ($cmd3, "compare.out");
	  if($res != 0){
	    my $timestamp = getLoggingTime();
	    system "mkdir ./$FailedCFiles/$timestamp";
	    system "rm -f $ofile";
	    system "cp gccout.txt ./$FailedCFiles/$timestamp/gccout.txt";
	    system "cp ${OPT}avrout.txt ./$FailedCFiles/$timestamp/${OPT}avrout.txt";
	    system "cp $cfile ./$FailedCFiles/$timestamp/$cfile";
	  }
	}
    }
    else {
      foreach my $OPT (("O0", "O1", "O2", "O3", "Os")){
	  my $cmd3 = "diff ${OPT}avrout.txt, ${Golden}avrout.txt";
	  $res = runit ($cmd3, "compare.out");
	  if($res != 0){
	    my $timestamp = getLoggingTime();
	    system "mkdir ./$FailedCFiles/$timestamp";
	    system "rm -f $ofile";
	    system "cp ${Golden}avrout.txt ./$FailedCFiles/$timestamp/${Golden}avrout.txt";
	    system "cp ${OPT}avrout.txt ./$FailedCFiles/$timestamp/${OPT}avrout.txt";
	    system "cp $cfile ./$FailedCFiles/$timestamp/$cfile";
	  }
	}
     }
    $n_good++;
    print "finished with test case $n_good.\n\n";
}

sub run_tests ($) {
    (my $n_tests) = @_;

    while ($n_tests == -1 || $n_good < $n_tests) {
	run_test ();
    }
}

########################### main ##################################



##print "time: $tod\n";
if (!(-f "$CSMITH_HOME/runtime/csmith.h")) {
    print "Please point the environment variable CSMITH_HOME to the top-level\n";
    print "directory of your Csmith tree before running this script.\n";
    exit(-1);
}

my $cnt = $ARGV[0];
$EXTRA_OPTIONS = 1 if (!defined($cnt));
$EXTRA_OPTIONS = $ARGV[1] if (@ARGV==2);
print "extra = $EXTRA_OPTIONS\n";
run_tests ($cnt);

##################################################################
