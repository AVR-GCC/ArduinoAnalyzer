/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      1936875617
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3 = (-1L);
static int16_t g_20 = 1L;
static uint32_t g_21 = 0UL;
static int8_t g_24[7][6] = {{0x8FL,0xE4L,0xB6L,1L,0xD3L,0x0EL},{0x46L,0xE4L,3L,1L,0xB6L,0xB6L},{0x46L,0x3DL,0x46L,(-2L),0x8FL,0xB6L},{1L,0xEDL,1L,0xD3L,7L,1L},{1L,0xD3L,0xEDL,0xE4L,0x1EL,0x46L},{1L,1L,0x8FL,0x46L,0x0EL,3L},{0xD3L,3L,0xB6L,0xEDL,0xEDL,0xEDL}};
static uint32_t g_27 = 0xAE45661CL;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t  func_8(int32_t  p_9, uint16_t  p_10, uint8_t  p_11);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_21 g_20 g_24 g_27
 * writes: g_3 g_21 g_24 g_20 g_27
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_2[7] = {0L,0L,0L,0L,0L,0L,0L};
    uint8_t l_6 = 246UL;
    uint32_t l_7 = 0x13717BE9L;
    int i;
    for (g_3 = 0; g_3 < 7; g_3 += 1)
    {
        l_2[g_3] = 0x51D69F42L;
    }
    if ((((uint8_t)((l_6 || g_3) | (-3L)) * (uint8_t)l_7) > g_3))
    { /* block id: 2 */
        g_24[5][1] = func_8((g_3 = l_7), l_6, l_6); //this line is the problem!!!
    }
    else
    { /* block id: 9 */
        for (g_20 = 0; (g_20 != 13); g_20 += 5)
        { /* block id: 12 */
            g_3 = 0xCEA2FF3EL;
        }
        g_27 ^= (g_3 = (g_24[5][1] >= g_24[5][1]));
    }
    return g_24[5][1];
}


/* ------------------------------------------ */
/* 
 * reads : g_3 g_21
 * writes: g_21
 */
static int32_t  func_8(int32_t  p_9, uint16_t  p_10, uint8_t  p_11)
{ /* block id: 4 */
    uint32_t l_17[2];
    int32_t l_18 = 0L;
    int32_t l_19 = 0xE3F9150FL;
    int i;
    for (i = 0; i < 2; i++)
        l_17[i] = 0xAA8E55A4L;
    l_17[0] = (-(uint16_t)(((int16_t)((uint16_t)65531UL << (uint16_t)g_3) << (int16_t)12) , g_3));
    g_21--;
    return p_10;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 10
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1
   depth: 5, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 14
XXX times a non-volatile is write: 8
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
   depth: 0, occurrence: 6
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 34.6
XXX percentage an existing variable is used: 65.4
********************* end of statistics **********************/

