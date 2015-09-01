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
use File::stat;

## This is a simple tester for Csmith itself.

#######################################################################

my $avrgcc = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/avr8-gnu-toolchain-linux_x86/bin/avr-gcc";
my $simulavr = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/Simulator/usr/bin/simulavr";
my $csmith = "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0/src/csmith";

my $DEV = "attiny2313";
my $MIN_PROGRAM_SIZE = 8000;
my $CSMITH_HOME = $ENV{"CSMITH_HOME"};
my $COMPILER = "$avrgcc -g";

my $EXTRA_OPTIONS = "--no-unions";

#my $VALGRIND = "";
#my $VALGRIND = "valgrind -q --error-exitcode=66 ";

#my $RUN_PROGRAM = 0;
my $RUN_PROGRAM = 1;

#my $RUN_KCC = 1;
my $RUN_KCC = 0;

#my $RUN_SAFELY = $CSMITH_HOME/scripts/RunSafely.sh;
my $RUN_SAFELY = "";
#######################################################################

# my $HEADER = "-I${CSMITH_HOME}/runtime -DCSMITH_MINIMAL";
my $HEADER = "-I${CSMITH_HOME}/runtime";

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

sub run_test () {
    my $cfile = "avrtest.c";
    my $ofile = "acrtest.elf";
    my $ofile_avr = "test_avr.exe";

    system "rm -f $cfile $ofile $ofile_avr";

    my $CSMITH_OPTIONS = "";
    if (rand()<0.5) { $CSMITH_OPTIONS .= " --quiet "; }
    # if (rand()<0.5) { $CSMITH_OPTIONS .= " --concise "; }
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
    
    my $cmd = "$CSMITH_HOME/src/csmith $CSMITH_OPTIONS $EXTRA_OPTIONS --output $cfile";
    my $res = runit ($cmd, "csmith.out"); 
    if ($res != 0 || !(-f $cfile) ) {
	print "Failed to generate program: $cmd\n";
	exit (-1);
    } 
    my $filesize = stat($cfile)->size;
    if ($filesize < $MIN_PROGRAM_SIZE) {
	return;
    }
    foreach my $OPT (("-O0", "-O1", "-O2", "-O3", "-Os")){
      system "grep Seed $cfile";
      system "ls -l $cfile";
      system "rm -f $ofile";
      my $cmd2 = "$COMPILER $OPT -mmcu=$DEV $cfile $HEADER -o $OPT$ofile";
      $res = runit ($cmd2, "csmith.out"); 
      if ($res != 0 || !(-f $ofile)) {
	  print "Failed to compile program generated by $cmd\n";
	  exit (-1);
      }	    
    
      if ($RUN_PROGRAM) {
	  my $cmd3 = "$simulavr -d $DEV -f $OPT$ofile";
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
    if ($RUN_KCC) {
	
	my $cmd3 = "gcc $cfile $HEADER -o $ofile_avr";
	$res = runit ($cmd3, "csmith.out"); 
	if ($res != 0 || !(-f $ofile_avr)) {
	    print "KCC failed to compile program generated by $cmd\n";
	    exit (-1);
	}	    
	
	my $cmd4 = "$RUN_SAFELY /dev/null out.txt ./$ofile_avr";
	$res = runit ($cmd4, "out2.txt");
	if ($res != 0 && $res != 137) {
	    print "KCC output died with error code $res\n";
	    exit (-1);
	}
	if ($res == 137) {
	    print "Timed out.\n";
	    return;
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

if (!(-f "$CSMITH_HOME/runtime/csmith.h")) {
    print "Please point the environment variable CSMITH_HOME to the top-level\n";
    print "directory of your Csmith tree before running this script.\n";
    exit(-1);
}

my $cnt = $ARGV[0];
$cnt = -1 if (!defined($cnt));
$EXTRA_OPTIONS = $ARGV[1] if (@ARGV==2);
print "extra = $EXTRA_OPTIONS\n";
run_tests ($cnt);

##################################################################
