/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      1892603832
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2 = 0x9696L;
static int32_t g_11 = 7L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_11
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_3 = 6UL;
    if ((g_2 && l_3))
    { /* block id: 1 */
        uint8_t l_10[2][7];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_10[i][j] = 0xD4L;
        }
        g_11 = ((int16_t)((uint8_t)((uint16_t)((g_2 || 0x51L) , 1UL) >> (uint16_t)g_2) % (uint8_t)l_10[1][3]) << (int16_t)4); //this line is the problem!!!
    }
    else
    { /* block id: 3 */
        return l_3;
    }
    return l_3;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 0

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 50
XXX percentage an existing variable is used: 50
********************* end of statistics **********************/

