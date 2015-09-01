/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      2444393357
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   volatile int16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static union U0 g_7 = {0L};/* VOLATILE GLOBAL g_7 */
static int32_t g_19 = 0x8C556123L;
static int32_t *g_18 = &g_19;
static int32_t * volatile g_25 = &g_19;/* VOLATILE GLOBAL g_25 */


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static uint16_t  func_4(int32_t  p_5);
static int32_t * func_11(uint8_t  p_12, int32_t  p_13);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_7.f0 g_7.f1 g_18 g_25
 * writes: g_18 g_19
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_26 = 0x90C63B88L;
    (*g_25) = (((uint16_t)func_4(((((!(g_7 , g_7.f0)) & 0L) , g_7.f1) && (-1L))) << (uint16_t)15) <= 0L);
    return l_26;
}


/* ------------------------------------------ */
/* 
 * reads : g_7.f0 g_18
 * writes: g_18
 */
static uint16_t  func_4(int32_t  p_5)
{ /* block id: 1 */
    uint16_t l_21[8][8] = {{65535UL,0x9D94L,65535UL,65535UL,0x9D94L,65535UL,65531UL,65529UL},{5UL,65531UL,0xD514L,0x043EL,65535UL,0xD514L,0x9D94L,0xD514L},{0x9209L,0x043EL,0UL,0x043EL,0x9209L,0x283DL,0x043EL,65529UL},{0x54E5L,0x9209L,65535UL,65535UL,0x043EL,0x54E5L,0x54E5L,0x043EL},{5UL,65535UL,65535UL,5UL,65531UL,0xD514L,0x043EL,65535UL},{0x043EL,0x9D94L,0UL,65529UL,0x9D94L,0xE6C8L,0x54E5L,65531UL},{0UL,0x54E5L,0UL,65529UL,0xD514L,0UL,0x283DL,65535UL},{65535UL,65529UL,0UL,0xD514L,0xE6C8L,0xE6C8L,0xD514L,0UL}};
    int i, j;
    for (p_5 = 19; (p_5 < 29); p_5 += 3)
    { /* block id: 4 */
        int8_t l_24 = (-3L);
        if ((p_5 < (-1L)))
        { /* block id: 5 */
            int32_t l_10 = (-1L);
            int32_t **l_20 = &g_18;
            if (l_10)
                break;
            (*l_20) = func_11(g_7.f0, p_5);
        }
        else
        { /* block id: 11 */
            ++l_21[7][4];
            if (p_5)
                break;
        }
        return l_24;
    }
    return l_21[3][4];
}


/* ------------------------------------------ */
/* 
 * reads : g_7.f0 g_18
 * writes:
 */
static int32_t * func_11(uint8_t  p_12, int32_t  p_13)
{ /* block id: 7 */
    union U0 *l_17 = &g_7;
    union U0 **l_16 = &l_17;
    (*l_16) = (((int16_t)g_7.f0 * (int16_t)p_12) , (void*)0);
    return g_18;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7.f0, "g_7.f0", print_hash_value);
    transparent_crc(g_7.f1, "g_7.f1", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
XXX total union variables: 1

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 3, occurrence: 2
   depth: 8, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 3

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 16.7
XXX average alias set size: 1

XXX times a non-volatile is read: 15
XXX times a non-volatile is write: 7
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 9
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 12
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 2
   depth: 2, occurrence: 4

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

