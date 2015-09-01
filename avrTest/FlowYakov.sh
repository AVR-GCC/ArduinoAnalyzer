#!/bin/bash
avrgcc=/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/avr8-gnu-toolchain-linux_x86/bin/avr-gcc
simulavr=/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/Simulator/usr/bin/simulavr
csmith=/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0/src/csmith
CSMITH_HOME=/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0
DEV=atmega328
#MIN_PROGRAM_SIZE=8000;
#CSMITH_HOME = $ENV{"CSMITH_HOME"};
#COMPILER = "$avrgcc -g";
HEADER="-I${CSMITH_HOME}/runtime_avr"
ofile="yakovtest.elf"
OPT="O0"
eval $avrgcc $HEADER -o yakovtest.elf yakovtest.c -mmcu=atmega328
eval $simulavr -d $DEV -f $ofile -W0x20,avrout2.txt -t trace2.txt -T  __stop_program
