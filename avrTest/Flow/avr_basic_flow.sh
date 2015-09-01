source /specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/.aliases;
setenv CSMITH_HOME "/specific/a/home/cc/students/cs/alonelmaliah/Desktop/avrTest/Utils/csmith-2.2.0";
setenv C_FILE "./temp.c";
setenv X86_FILE "./temp.exe";
setenv HEADER "-I${CSMITH_HOME}/runtime -DCSMITH_MINIMAL";
setenv X86_COMPILER "gcc -w -O1";


#configure csmith

#Generate csmith code
echo "-I- Generating csmith code..."
csmith > $C_FILE;

#Compile to x86
echo "-I- Compiling x86 code..."
$X86_COMPILER $C_FILE -o $X86_FILE $HEADER;

  
#Compile to AVR atmega328
echo "-I- skipping AVR code..."

  #add checksum writting reg
  #change data structs
  
#Simulate Runs
  
  #run x86 to for comparison
  #run sim + get checksum
  
#report comparison