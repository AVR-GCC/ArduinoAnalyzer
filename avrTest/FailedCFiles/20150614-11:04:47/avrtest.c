/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      2251499059
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint8_t g_3[3] = {248UL,248UL,248UL};
static int32_t g_12 = 0x3292C5EBL;
static int32_t * volatile g_11 = &g_12;/* VOLATILE GLOBAL g_11 */
static uint32_t g_15 = 0x3B01D91EL;


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static int32_t  func_4(uint8_t  p_5, uint32_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_11 g_12 g_15
 * writes: g_12 g_15
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_2 = 0L;
    if (l_2)
    { /* block id: 1 */
        return g_3[2];
    }
    else
    { /* block id: 3 */
        int32_t l_7 = 3L;
        g_15 |= func_4(l_2, l_7);
    }
    return l_2;
}


/* ------------------------------------------ */
/* 
 * reads : g_3 g_11 g_12
 * writes: g_12
 */
static int32_t  func_4(uint8_t  p_5, uint32_t  p_6)
{ /* block id: 4 */
    int32_t *l_10 = (void*)0;
    (*g_11) = ((int8_t)(-7L) >> (int8_t)g_3[1]);
    for (p_6 = (-30); (p_6 == 24); p_6++)
    { /* block id: 8 */
        return (*g_11);
    }
    return p_6;
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
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 0

XXX max expression depth: 3
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1

XXX total number of pointers: 2

XXX times a variable address is taken: 1
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 3
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 85.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 3

XXX percentage a fresh-made variable is used: 44.4
XXX percentage an existing variable is used: 55.6
********************* end of statistics **********************/

