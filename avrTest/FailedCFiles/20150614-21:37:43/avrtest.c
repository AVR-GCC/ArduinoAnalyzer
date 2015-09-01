/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      674298723
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_2 = 18446744073709551607UL;
static int32_t g_5 = 0xCB363F9EL;
static int32_t g_8[7] = {0xBB35B689L,0xBB35B689L,0xBB35B689L,0xBB35B689L,0xBB35B689L,0xBB35B689L,0xBB35B689L};
static uint16_t g_9 = 0x7AF9L;
static int32_t * volatile g_14 = &g_5;/* VOLATILE GLOBAL g_14 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_15(uint32_t  p_16);
static int32_t * func_27(int8_t  p_28, uint16_t  p_29);
static int32_t * func_31(uint32_t  p_32, int32_t * p_33, uint16_t * p_34);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_9 g_8 g_5 g_14
 * writes: g_2 g_9 g_5 g_14
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_3[8] = {65535UL,65535UL,0xE324L,65535UL,65535UL,0xE324L,65535UL,65535UL};
    int32_t l_6 = 0x796840EBL;
    int32_t l_7 = 0x71CB27F0L;
    uint32_t l_30 = 1UL;
    int32_t *l_40[6] = {&l_7,&l_7,&l_7,&l_7,&l_7,&l_7};
    int32_t **l_39[2][7] = {{&l_40[2],&l_40[2],&l_40[2],&l_40[2],(void*)0,&l_40[2],(void*)0},{&l_40[2],&l_40[2],&l_40[2],&l_40[2],(void*)0,&l_40[2],(void*)0}};
    int i, j;
    if (g_2)
    { /* block id: 1 */
        for (g_2 = 1; (g_2 <= 7); g_2 += 1)
        { /* block id: 4 */
            int32_t *l_4[3][4] = {{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,&g_5,&g_5},{&g_5,&g_5,(void*)0,&g_5}};
            int i, j;
            g_9--;
            g_5 ^= (l_3[g_2] , g_8[1]);
        }
        (*g_14) = ((uint16_t)(g_9 == 0xE6L) - (uint16_t)5UL);
    }
    else
    { /* block id: 9 */
        int32_t *l_23 = &l_7;
        (*l_23) &= func_15(l_3[6]);
        for (g_2 = 0; (g_2 < 28); g_2++)
        { /* block id: 17 */
            uint32_t l_26[5][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
            int i, j;
            return l_26[3][0];
        }
    }
    g_14 = func_27(g_2, l_30);
    return (*g_14);
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_14 g_5
 * writes: g_9
 */
static int32_t  func_15(uint32_t  p_16)
{ /* block id: 10 */
    int32_t *l_19 = (void*)0;
    uint16_t *l_20 = &g_9;
    int32_t l_21 = (-7L);
    int32_t l_22[8][2];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
            l_22[i][j] = 0L;
    }
    l_22[3][0] &= ((uint8_t)(((*l_20) ^= (l_19 != &g_5)) >= p_16) - (uint8_t)l_21);
    return (*g_14);
}


/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes:
 */
static int32_t * func_27(int8_t  p_28, uint16_t  p_29)
{ /* block id: 21 */
    int32_t *l_35 = &g_5;
    uint16_t *l_36 = (void*)0;
    int32_t **l_38 = &l_35;
    (*l_38) = func_31(g_8[5], l_35, l_36);
    return &g_5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_31(uint32_t  p_32, int32_t * p_33, uint16_t * p_34)
{ /* block id: 22 */
    int32_t *l_37 = &g_5;
    return l_37;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 13
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 14
   depth: 2, occurrence: 4
   depth: 3, occurrence: 2
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 12

XXX times a variable address is taken: 17
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 1
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 8

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 10
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 10
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1.25

XXX times a non-volatile is read: 20
XXX times a non-volatile is write: 12
XXX times a volatile is read: 2
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 4
XXX percentage of non-volatile access: 88.9

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 15
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 4
   depth: 2, occurrence: 3

XXX percentage a fresh-made variable is used: 43.3
XXX percentage an existing variable is used: 56.7
********************* end of statistics **********************/

