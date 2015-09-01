/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      2496000260
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_7[2] = {1UL,1UL};
static int32_t g_10 = 0xF737A9A9L;
static int32_t ** volatile g_15 = (void*)0;/* VOLATILE GLOBAL g_15 */


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static int32_t * func_2(int32_t  p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes: g_10
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_4[1][4];
    int32_t *l_12 = &g_10;
    int32_t **l_11 = &l_12;
    int32_t *l_14 = &g_10;
    int32_t **l_13 = &l_14;
    int32_t *l_17 = &g_10;
    int32_t **l_16 = &l_17;
    int32_t l_18[1][4] = {{0x265E3EDFL,0x265E3EDFL,0x265E3EDFL,0x265E3EDFL}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_4[i][j] = 0UL;
    }
    (*l_16) = ((*l_13) = ((*l_11) = func_2(l_4[0][3])));
    return l_18[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes: g_10
 */
static int32_t * func_2(int32_t  p_3)
{ /* block id: 1 */
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = &g_10;
    (*l_9) = ((uint16_t)g_7[0] % (uint16_t)p_3);
    return l_8;
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
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 3
XXX total union variables: 0

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1
   depth: 4, occurrence: 1

XXX total number of pointers: 10

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 11

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 7
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 4
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 60
XXX average alias set size: 1

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 8
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 4
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 4

XXX percentage a fresh-made variable is used: 42.9
XXX percentage an existing variable is used: 57.1
********************* end of statistics **********************/

