/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      4029011624
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
};

union U1 {
   int8_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static uint32_t g_17 = 0UL;
static uint32_t g_28 = 2UL;
static int32_t * volatile g_29 = (void*)0;/* VOLATILE GLOBAL g_29 */
static int32_t g_32 = 1L;
static int8_t g_35[4] = {(-1L),(-1L),(-1L),(-1L)};
static union U0 g_37[2][5] = {{{0xFFL},{0xFFL},{0x4FL},{0xFFL},{0xFFL}},{{0UL},{0xFFL},{0UL},{0UL},{0xFFL}}};
static union U0 *g_36 = &g_37[0][1];
static union U0 *g_39 = &g_37[0][1];


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_2(int32_t  p_3, int32_t  p_4, int32_t  p_5, int16_t  p_6);
static int8_t  func_9(union U1  p_10, uint8_t  p_11, uint8_t  p_12);
static union U1  func_13(int8_t  p_14, uint32_t  p_15, uint16_t  p_16);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_17 g_32 g_36
 * writes: g_28 g_32 g_17 g_36 g_39
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int8_t l_18 = (-1L);
    uint32_t l_20 = 4294967295UL;
    int32_t *l_30 = (void*)0;
    int32_t *l_31 = &g_32;
    (*l_31) = func_2((((int8_t)func_9(func_13(g_17, g_17, l_18), l_20, l_20) % (int8_t)g_17) == 0x360DL), l_20, g_17, g_17);
    for (g_17 = 0; (g_17 <= 53); ++g_17)
    { /* block id: 12 */
        for (g_32 = 0; (g_32 <= 3); g_32 += 1)
        { /* block id: 15 */
            union U0 **l_38 = &g_36;
            g_39 = ((*l_38) = g_36);
        }
    }
    return (*l_31);
}


/* ------------------------------------------ */
/* 
 * reads : g_17
 * writes: g_28
 */
static int32_t  func_2(int32_t  p_3, int32_t  p_4, int32_t  p_5, int16_t  p_6)
{ /* block id: 6 */
    union U0 l_27 = {0x53L};
    g_28 = ((int16_t)(l_27 , g_17) * (int16_t)0xB4AFL);
    return l_27.f0;
}


/* ------------------------------------------ */
/* 
 * reads : g_17
 * writes:
 */
static int8_t  func_9(union U1  p_10, uint8_t  p_11, uint8_t  p_12)
{ /* block id: 3 */
    union U0 l_23 = {252UL};
    int32_t l_24 = 0x9333C7D2L;
    l_24 ^= ((((uint8_t)(((l_23 , g_17) < g_17) & p_11) * (uint8_t)3L) , 0xFDL) && p_12);
    return p_10.f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static union U1  func_13(int8_t  p_14, uint32_t  p_15, uint16_t  p_16)
{ /* block id: 1 */
    union U1 l_19 = {0x85L};
    return l_19;
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
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_35[i], "g_35[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_37[i][j].f0, "g_37[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 10
XXX total union variables: 3

XXX max expression depth: 13
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 7, occurrence: 1
   depth: 13, occurrence: 1

XXX total number of pointers: 6

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 2

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 24
XXX times a non-volatile is write: 9
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 8
   depth: 1, occurrence: 1
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 41.7
XXX percentage an existing variable is used: 58.3
********************* end of statistics **********************/

