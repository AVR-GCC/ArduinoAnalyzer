/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3116622855
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U1 {
   uint16_t  f0;
};

union U3 {
   int16_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_11[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int32_t g_14 = 0x52BF3388L;
static union U1 g_18[7] = {{0x0A42L},{0x0A42L},{0x0A42L},{0x0A42L},{0x0A42L},{0x0A42L},{0x0A42L}};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t * func_2(union U3  p_3, int32_t * p_4, union U1  p_5, union U3  p_6);
static union U3  func_7(uint8_t  p_8, int16_t  p_9, int32_t * p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_11 g_18 g_14 g_18.f0
 * writes: g_14
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint16_t l_12[4];
    int32_t *l_13 = &g_14;
    union U3 l_19 = {0xA938L};
    int32_t **l_24 = &l_13;
    int i;
    for (i = 0; i < 4; i++)
        l_12[i] = 0x2B74L;
    (*l_24) = func_2(func_7(g_11[2], l_12[3], l_13), &g_14, g_18[5], l_19);
    return g_18[5].f0;
}


/* ------------------------------------------ */
/* 
 * reads : g_14
 * writes: g_14
 */
static int32_t * func_2(union U3  p_3, int32_t * p_4, union U1  p_5, union U3  p_6)
{ /* block id: 4 */
    int16_t l_22 = 1L;
    int32_t *l_23 = &g_14;
    (*p_4) = ((uint16_t)(l_22 | g_14) - (uint16_t)65535UL);
    return l_23;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static union U3  func_7(uint8_t  p_8, int16_t  p_9, int32_t * p_10)
{ /* block id: 1 */
    int32_t l_15 = (-2L);
    int16_t l_16 = 6L;
    union U3 l_17 = {6L};
    l_16 ^= l_15;
    return l_17;
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
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_18[i].f0, "g_18[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
XXX total union variables: 3

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 7
   depth: 3, occurrence: 1
   depth: 8, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 1

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 11
XXX times a non-volatile is write: 5
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 6
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 6

XXX percentage a fresh-made variable is used: 71.4
XXX percentage an existing variable is used: 28.6
********************* end of statistics **********************/

