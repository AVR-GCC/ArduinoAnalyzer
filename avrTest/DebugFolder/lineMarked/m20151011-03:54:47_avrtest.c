/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      195735969
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_5[3][2] = {{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}};
static int16_t g_8[1][8] = {{0x5FA3L,0x5FA3L,0x5FA3L,0x5FA3L,0x5FA3L,0x5FA3L,0x5FA3L,0x5FA3L}};
static int8_t g_10 = 1L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5
 * writes: g_8 g_10
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_4 = 4294967291UL;
    uint32_t l_9 = 0xCAA8E55AL;
    if ((((int16_t)(l_4 & g_5[1][0]) >> (int16_t)g_5[1][1]) < (-1L)))
    { /* block id: 1 */
        int32_t l_6 = 0x439CB61DL;
        int16_t l_7 = 0x9FB1L;
        l_7 |= (l_6 > g_5[1][0]);
        g_8[0][3] = ((((g_5[1][0] != l_4) | g_5[1][0]) >= l_4) == g_5[1][0]);
    }
    else
    { /* block id: 4 */
        g_10 = (l_9 = 3L); //this line is the problem!!!
    }
    return l_4;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 2
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 4
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 46.7
XXX percentage an existing variable is used: 53.3
********************* end of statistics **********************/

