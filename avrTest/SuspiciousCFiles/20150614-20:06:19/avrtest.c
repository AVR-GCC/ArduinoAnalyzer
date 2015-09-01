/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      2414494986
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_5[2][8] = {{1L,(-1L),(-1L),1L,1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L,1L,(-1L),(-1L),1L}};
static int32_t g_17 = (-1L);
static uint32_t g_41 = 0x6F914A12L;
static int32_t g_42 = 0x4D633C66L;


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static uint32_t  func_8(int32_t  p_9, uint32_t  p_10, uint16_t  p_11);
static int32_t  func_12(int16_t  p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_5 g_17
 * writes: g_5 g_17 g_41 g_42
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    uint8_t l_2 = 0x39L;
    int32_t l_43[2];
    int i;
    for (i = 0; i < 2; i++)
        l_43[i] = (-1L);
    l_2 ^= 0x10C93B4EL;
    for (l_2 = 0; (l_2 != 9); ++l_2)
    { /* block id: 4 */
        uint32_t l_15 = 0UL;
        int8_t l_27 = 5L;
        for (g_5[1][4] = 0; (g_5[1][4] <= 2); g_5[1][4]++)
        { /* block id: 7 */
            int32_t l_14 = 0xCFBCE008L;
            uint32_t *l_40 = &g_41;
            g_42 = (((*l_40) = func_8((func_12(((g_5[1][4] , l_14) && l_15)) , l_27), g_5[1][6], l_15)) >= g_5[1][2]);
        }
        if (l_43[1])
            break;
    }
    return g_5[1][4];
}


/* ------------------------------------------ */
/* 
 * reads : g_17 g_5
 * writes: g_17
 */
static uint32_t  func_8(int32_t  p_9, uint32_t  p_10, uint16_t  p_11)
{ /* block id: 17 */
    int32_t l_36 = 0x8C5CECCEL;
    int16_t l_37 = 4L;
    int32_t *l_38 = (void*)0;
    int32_t *l_39 = &g_17;
    (*l_39) = ((uint8_t)((((int8_t)((uint16_t)((uint32_t)(func_12(l_36) , p_9) % (uint32_t)p_11) % (uint16_t)l_37) + (int8_t)p_11) & g_5[0][0]) != g_5[1][6]) >> (uint8_t)l_36);
    (*l_39) ^= (0UL <= p_11);
    return (*l_39);
}


/* ------------------------------------------ */
/* 
 * reads : g_17 g_5
 * writes: g_17
 */
static int32_t  func_12(int16_t  p_13)
{ /* block id: 8 */
    int32_t *l_16 = &g_17;
    int32_t *l_18 = (void*)0;
    int32_t *l_19[5];
    uint32_t l_20 = 7UL;
    int i;
    for (i = 0; i < 5; i++)
        l_19[i] = &g_17;
    --l_20;
    for (l_20 = 1; (l_20 > 3); ++l_20)
    { /* block id: 12 */
        int16_t l_25 = 0x1B87L;
        int32_t l_26 = (-9L);
        (*l_16) &= p_13;
        l_26 |= ((((*l_16) || g_5[1][4]) | g_5[1][4]) != l_25);
    }
    return g_5[1][4];
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 11
XXX total union variables: 0

XXX max expression depth: 10
breakdown:
   depth: 1, occurrence: 14
   depth: 2, occurrence: 4
   depth: 4, occurrence: 1
   depth: 9, occurrence: 1
   depth: 10, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 22

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 11
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 30
XXX times a non-volatile is write: 15
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 14
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 9
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 34.4
XXX percentage an existing variable is used: 65.6
********************* end of statistics **********************/

