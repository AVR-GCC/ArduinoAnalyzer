############################################
#   Arduino compile & upload Flow
#   Requires root permissions & physical COM
#   
#   *writes checksum to file
############################################

##################
# Config
#arguments: 1-srcFile, 2-device, 3-com, 4-checksum_out_file 
srcFile=$1
device=$2
COM=$3
output_file=$4
#TODO move to config.py
ard_home=/home/student/avr/arduino-1.6.5/
#temp compilation files
tmp_folder=/tmp/arduino_compile_temp
c_file=avrtest_arduino.cpp

##################
# AVRDude - translate .elf to ihex & upload
cp $srcFile $tmp_folder/$c_file.elf
$ard_home/hardware/tools/avr/bin/avr-objcopy -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 $tmp_folder/$c_file.elf $tmp_folder/$c_file.eep 
$ard_home/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $tmp_folder/$c_file.elf $tmp_folder/$c_file.hex 
$ard_home/hardware/tools/avr/bin/avrdude -C$ard_home/hardware/tools/avr/etc/avrdude.conf -v -p$device -carduino -P$COM -b57600 -D -Uflash:w:$tmp_folder/$c_file.hex:i

##################
# AVRDude - wait, then read checksum to output_file
sleep 1
sudo head -n1 $COM > $output_file
echo "Upload & run done."
