
#include "csmith.h"


static long __undefined;

/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    //we see a different multiplecation result for the compilers
    platform_main_end(((uint16_t)0x8001L * (uint16_t)0x2L), 0);
    //this is because avr sees the value in the parenthesese as 16 but, which is why we get a warning for this line
    platform_main_end(((uint16_t)0x8001L * (uint16_t)0x2L)>>16, 0);
    //once this happens avr thinks that the upper bits are zero and dosnt xor the correct upper bits (like gcc did)
    platform_main_end(((uint16_t)0x8001L * (uint16_t)0x2L)&0x0000FFFF, 0);
    return 0;
}

0x8001 * 0x2 = 0x10002
gcc sees the 1 (second checksum) and xors it to the 2 (third checksum) to get the 3 (first checksum)
avr dosnt see the 1 (second checksum = 0) and so xors 0 and stays with 2 (first checksum)

out:

gcc:
checksum = 3
checksum = 1
checksum = 2

avr:
checksum = 2
checksum = 0
checksum = 2
