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
eval $csmith --output test1yakov.c --no-argc --no-arrays --no-bitfields --no-checksum \
				   --no-comma-operators --no-compound-assignment --no-consts --no-divs \
				   --no-longlong --no-float --no-math64 --max-array-dim 1 --max-array-len-per-dim 3 \
                                   --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 \
                                   --max-funcs 2 --max-struct-fields 2 --max-union-fields 2
					

