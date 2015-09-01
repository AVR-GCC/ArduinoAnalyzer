/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1635550351
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * volatile  f0;
};

/* --- GLOBAL VARIABLES --- */
static uint16_t g_11 = 0x9CC2L;
static int32_t g_15[8] = {6L,6L,6L,6L,6L,6L,6L,6L};
static union U0 g_16 = {0};/* VOLATILE GLOBAL g_16 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static union U0  func_6(uint32_t  p_7, uint8_t  p_8, uint32_t  p_9, int32_t  p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_11 g_15 g_16
 * writes: g_15 g_11
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_12 = 0xD7865925L;
    g_15[7] = (((int16_t)((int16_t)(func_6(g_11, l_12, l_12, l_12) , l_12) * (int16_t)0x6959L) - (int16_t)g_11) ^ l_12);
    for (g_11 = 0; (g_11 > 31); ++g_11)
    { /* block id: 7 */
        uint8_t l_19[2][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_19[i][j] = 4UL;
        }
        if ((l_12 <= l_19[1][2]))
        { /* block id: 8 */
            int32_t *l_20 = &l_12;
            (*l_20) ^= ((-7L) >= 0x03CAL);
        }
        else
        { /* block id: 10 */
            if (g_15[0])
                break;
        }
    }
    return g_15[6];
}


/* ------------------------------------------ */
/* 
 * reads : g_15 g_16
 * writes: g_15
 */
static union U0  func_6(uint32_t  p_7, uint8_t  p_8, uint32_t  p_9, int32_t  p_10)
{ /* block id: 1 */
    uint8_t l_13 = 0UL;
    int32_t *l_14 = &g_15[7];
    (*l_14) &= l_13;
    return g_16;
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
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 1

XXX max expression depth: 9
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 3
   depth: 9, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 2
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 14
XXX times a non-volatile is write: 6
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 35.7
XXX percentage an existing variable is used: 64.3
********************* end of statistics **********************/

