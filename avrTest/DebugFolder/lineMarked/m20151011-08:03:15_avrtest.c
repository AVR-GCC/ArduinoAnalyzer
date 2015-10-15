/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      4045346739
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[7] = {0xFDF99FF6L,0xFDF99FF6L,0xFDF99FF6L,0xFDF99FF6L,0xFDF99FF6L,0xFDF99FF6L,0xFDF99FF6L};
static int32_t g_15[3][7] = {{0xC32B96CEL,0L,0x28F4E1C2L,0x28F4E1C2L,0x9378F1E0L,0x28F4E1C2L,(-1L)},{0L,0x863CC1DAL,(-1L),(-1L),0xC32B96CEL,(-1L),0x9378F1E0L},{0x863CC1DAL,0x28F4E1C2L,(-1L),(-1L),0L,(-1L),0xC32B96CEL}};
static uint32_t g_18 = 0xA80278EEL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_15
 * writes: g_2 g_15 g_18
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_16 = 1UL;
    for (g_2[5] = 8; (g_2[5] > (-20)); --g_2[5])
    { /* block id: 3 */
        uint8_t l_14 = 9UL;
        int32_t l_17 = 0x8DC164F9L;
        g_18 = (((int16_t)((l_17 ^= (((uint8_t)(-(uint8_t)(g_15[0][2] |= ((uint16_t)(((int16_t)(l_14 <= g_2[0]) * (int16_t)0L) ^ 250UL) * (uint16_t)g_2[5]))) + (uint8_t)g_2[6]) , l_16)) && 0xF780L) % (int16_t)l_14) ^ 0UL); //this line is the problem!!!
        l_17 = g_15[0][0];
    }
    return g_15[2][5];
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
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 0

XXX max expression depth: 12
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1
   depth: 12, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 5
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

XXX percentage a fresh-made variable is used: 41.7
XXX percentage an existing variable is used: 58.3
********************* end of statistics **********************/

