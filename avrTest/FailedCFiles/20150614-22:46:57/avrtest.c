/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3088042425
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2 = 1L;/* VOLATILE GLOBAL g_2 */
static volatile int32_t g_3 = 0xBE1D925BL;/* VOLATILE GLOBAL g_3 */
static int32_t g_4 = 0x46DF37D4L;
static int32_t g_9[6] = {0xC97412DFL,0xC97412DFL,0xC97412DFL,0xC97412DFL,0xC97412DFL,0xC97412DFL};
static int32_t g_17 = 0x600D5493L;
static int32_t * volatile g_18 = (void*)0;/* VOLATILE GLOBAL g_18 */


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static int32_t  func_10(uint32_t  p_11, int16_t  p_12);
static int16_t  func_23(uint16_t  p_24, int32_t * p_25);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_9 g_17 g_3
 * writes: g_4 g_9 g_17
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int32_t l_7 = (-1L);
    int8_t l_20 = (-1L);
    for (g_4 = (-1); (g_4 <= 5); g_4++)
    { /* block id: 3 */
        int32_t *l_8 = &g_9[1];
        (*l_8) |= ((8L >= l_7) , 3L);
        for (l_7 = 0; (l_7 <= 5); l_7 += 1)
        { /* block id: 7 */
            int32_t *l_16 = &g_17;
            int32_t *l_19 = (void*)0;
            int i;
            l_20 |= ((*l_16) |= func_10(g_9[l_7], g_9[l_7]));
            (*l_8) = ((int16_t)func_23(g_3, &l_7) * (int16_t)0x7273L);
        }
    }
    return l_7;
}


/* ------------------------------------------ */
/* 
 * reads : g_9
 * writes: g_9
 */
static int32_t  func_10(uint32_t  p_11, int16_t  p_12)
{ /* block id: 8 */
    for (p_11 = 1; (p_11 <= 5); p_11 += 1)
    { /* block id: 11 */
        int32_t *l_14 = (void*)0;
        int32_t *l_15 = &g_9[p_11];
        int i;
        g_9[p_11] ^= (~0x45F5B1B6L);
        (*l_15) |= 0xDCA27289L;
    }
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : g_17
 * writes: g_17
 */
static int16_t  func_23(uint16_t  p_24, int32_t * p_25)
{ /* block id: 18 */
    int32_t *l_26 = &g_17;
    (*l_26) = 0x4F9A0237L;
    return g_17;
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
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_17, "g_17", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 12
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 4, occurrence: 2

XXX total number of pointers: 8

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 11

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 12
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 8
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 37.5
XXX average alias set size: 1

XXX times a non-volatile is read: 9
XXX times a non-volatile is write: 15
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 7
XXX percentage of non-volatile access: 96

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 12
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 4
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 28.6
XXX percentage an existing variable is used: 71.4
********************* end of statistics **********************/

