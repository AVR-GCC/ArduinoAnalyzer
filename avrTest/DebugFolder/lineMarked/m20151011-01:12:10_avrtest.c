/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      1767676848
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint32_t g_4 = 0x182EAC45L;
static int32_t g_6 = 1L;


/* --- FORWARD DECLARATIONS --- */
static uint32_t  func_1(void);
static int32_t  func_7(uint32_t  p_8, uint32_t  p_9);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_4 g_6
 * writes: g_6
 */
static uint32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_5 = 0xA9565E08L;
    int32_t l_11 = 0x8E9934B0L;
    g_6 ^= ((uint16_t)((((g_4 > g_4) > l_5) & l_5) , g_4) + (uint16_t)(-1L)); //this line is the problem!!!
    l_11 = func_7(l_5, g_4);
    return g_4;
}


/* ------------------------------------------ */
/* 
 * reads : g_6
 * writes:
 */
static int32_t  func_7(uint32_t  p_8, uint32_t  p_9)
{ /* block id: 2 */
    uint16_t l_10 = 0UL;
    l_10 = (g_6 & 1L);
    return l_10;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 0

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1
   depth: 3, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 3
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 38.5
XXX percentage an existing variable is used: 61.5
********************* end of statistics **********************/

