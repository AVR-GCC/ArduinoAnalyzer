############################################
#   Arduino compile & upload Flow
#   Requires root permissions & physical COM
#   
#   *writes checksum to file
############################################
##################
# Config
#arguments: 1-srcFile,  2-opt flag,3-device, 4-com, 5-checksum_out_file 
orig_c_file=$1
opti_flag=$2
device=$3
COM=$4
output_file=$5
#TODO move to config.py
ard_home=/home/student/avr/arduino-1.6.5/
#temp compilation files
tmp_folder=/tmp/arduino_compile_temp
c_file=avrtest_arduino.cpp
##################
#pre-compile work - cleaning directories & preparing c-file for arduino format, no main allowed
rm -Rf $tmp_folder 
mkdir $tmp_folder
sed 's/int main (int argc, char/int main1 (int argc, char/g' $orig_c_file > $tmp_folder/$c_file
##################
# compile actual c file
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -$opti_flag -w -MMD -fpermissive -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $tmp_folder/$c_file -o $tmp_folder/$c_file.o 
##################
# arduino specific libraries
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -x assembler-with-cpp -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/wiring_pulse.S -o $tmp_folder/wiring_pulse.S.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/wiring_pulse.c -o $tmp_folder/wiring_pulse.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/WInterrupts.c -o $tmp_folder/WInterrupts.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/wiring_shift.c -o $tmp_folder/wiring_shift.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/wiring.c -o $tmp_folder/wiring.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/wiring_analog.c -o $tmp_folder/wiring_analog.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/runtime/windows/_rand48.c -o $tmp_folder/_rand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/runtime/windows/srand48.c -o $tmp_folder/srand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/runtime/windows/lrand48.c -o $tmp_folder/lrand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/runtime/volatile_runtime.c -o $tmp_folder/volatile_runtime.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/wiring_digital.c -o $tmp_folder/wiring_digital.c.o 
$ard_home/hardware/tools/avr/bin/avr-gcc -c -g -Os -w -ffunction-sections -fdata-sections -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/hooks.c -o $tmp_folder/hooks.c.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/HardwareSerial1.cpp -o $tmp_folder/HardwareSerial1.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/main.cpp -o $tmp_folder/main.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/HardwareSerial2.cpp -o $tmp_folder/HardwareSerial2.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/HardwareSerial3.cpp -o $tmp_folder/HardwareSerial3.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/HardwareSerial.cpp -o $tmp_folder/HardwareSerial.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/USBCore.cpp -o $tmp_folder/USBCore.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/HardwareSerial0.cpp -o $tmp_folder/HardwareSerial0.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/new.cpp -o $tmp_folder/new.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/WString.cpp -o $tmp_folder/WString.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/CDC.cpp -o $tmp_folder/CDC.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/Stream.cpp -o $tmp_folder/Stream.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/WMath.cpp -o $tmp_folder/WMath.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/IPAddress.cpp -o $tmp_folder/IPAddress.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/HID.cpp -o $tmp_folder/HID.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/Print.cpp -o $tmp_folder/Print.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/abi.cpp -o $tmp_folder/abi.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-g++ -c -g -O0 -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=$device -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_DUEMILANOVE -DARDUINO_ARCH_AVR -I$ard_home/hardware/arduino/avr/cores/arduino -I$ard_home/hardware/arduino/avr/variants/standard $ard_home/hardware/arduino/avr/cores/arduino/Tone.cpp -o $tmp_folder/Tone.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/wiring_pulse.S.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/wiring_pulse.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/WInterrupts.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/wiring_shift.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/wiring.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/wiring_analog.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/_rand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/srand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/lrand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/volatile_runtime.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/_rand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/srand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/lrand48.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/volatile_runtime.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/wiring_digital.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/hooks.c.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/HardwareSerial1.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/main.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/HardwareSerial2.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/HardwareSerial3.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/HardwareSerial.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/USBCore.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/HardwareSerial0.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/new.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/WString.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/CDC.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/Stream.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/WMath.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/IPAddress.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/HID.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/Print.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/abi.cpp.o 
$ard_home/hardware/tools/avr/bin/avr-ar rcs $tmp_folder/core.a $tmp_folder/Tone.cpp.o 
##################
# final linking of all components & c file
$ard_home/hardware/tools/avr/bin/avr-gcc -w -$opti_flag -Wl,--gc-sections -mmcu=$device -o $tmp_folder/$c_file.elf $tmp_folder/$c_file.o $tmp_folder/core.a -L$tmp_folder -lm 
cp $tmp_folder/$c_file.elf $output_file
echo "Compilation done."
