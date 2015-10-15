/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      3661712151
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_5[4] = {0x1BF506E6L,0x1BF506E6L,0x1BF506E6L,0x1BF506E6L};
static uint8_t g_10 = 0UL;
static int16_t g_11 = 0x9393L;
static uint8_t g_15 = 0x7CL;
static int8_t g_16 = 0xFBL;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_11 g_10
 * writes: g_10 g_11 g_15 g_16
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int16_t l_4 = 0x8094L;
    int32_t l_6[6] = {0xDD8D1303L,1L,1L,1L,0xDD8D1303L,0xDD8D1303L};
    int i;
    if ((l_6[2] = ((int16_t)l_4 << (int16_t)g_5[0]))) //this line is the problem!!!
    { /* block id: 2 */
        uint8_t l_7 = 251UL;
        ++l_7;
        if ((l_7 <= g_5[0]))
        { /* block id: 4 */
            g_10 = l_7;
        }
        else
        { /* block id: 6 */
            g_11 = l_7;
        }
    }
    else
    { /* block id: 9 */
        int32_t l_17[2][7];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_17[i][j] = (-1L);
        }
        if ((g_11 , g_10))
        { /* block id: 10 */
            return g_10;
        }
        else
        { /* block id: 12 */
            int32_t l_14[4];
            int i;
            for (i = 0; i < 4; i++)
                l_14[i] = 0L;
            g_16 = (g_15 = ((int8_t)((l_14[0] <= g_5[0]) , g_5[0]) % (int8_t)g_10));
        }
        l_17[1][4] |= g_5[0];
    }
    return g_10;
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
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 15
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 4
   depth: 2, occurrence: 4

XXX percentage a fresh-made variable is used: 45.5
XXX percentage an existing variable is used: 54.5
********************* end of statistics **********************/

