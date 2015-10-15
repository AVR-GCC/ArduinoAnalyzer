/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      1318705381
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[1] = {(-2L)};
static int8_t g_11[5] = {1L,1L,1L,1L,1L};


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_11
 * writes: g_2 g_11
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_10 = 0xF3F17E2FL;
    for (g_2[0] = (-3); (g_2[0] != (-11)); g_2[0]--)
    { /* block id: 3 */
        int32_t l_9[4][6] = {{0L,0L,0L,0xC4F27D27L,(-5L),(-5L)},{0L,0xC4F27D27L,0L,(-5L),(-5L),(-5L)},{0xC4F27D27L,0xC4F27D27L,0xC4F27D27L,(-5L),0L,(-5L)},{0xC4F27D27L,(-5L),0xC4F27D27L,0L,0L,0L}};
        int i, j;
        g_11[2] &= (((int16_t)((uint8_t)((g_2[0] & g_2[0]) > l_9[2][3]) + (uint8_t)0xA3L) * (int16_t)l_10) >= g_2[0]); //this line is the problem!!!
    }
    return l_10;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 7
XXX times a non-volatile is write: 2
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 42.9
XXX percentage an existing variable is used: 57.1
********************* end of statistics **********************/

