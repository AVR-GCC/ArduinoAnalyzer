/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1865046464
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
};
#pragma pack(pop)

union U3 {
   int8_t  f0;
   uint16_t  f1;
};

/* --- GLOBAL VARIABLES --- */
static int8_t g_9 = 0xFEL;
static int8_t *g_8[6] = {&g_9,&g_9,&g_9,&g_9,&g_9,&g_9};
static struct S0 g_11 = {0xE418A527L};
static int32_t g_19[1][8] = {{7L,7L,7L,7L,7L,7L,7L,7L}};
static int32_t * volatile g_20 = (void*)0;/* VOLATILE GLOBAL g_20 */
static int32_t g_22 = 0L;
static int32_t * volatile g_21 = &g_22;/* VOLATILE GLOBAL g_21 */
static int32_t * volatile g_29 = &g_19[0][4];/* VOLATILE GLOBAL g_29 */
static int32_t g_31 = (-1L);


/* --- FORWARD DECLARATIONS --- */
static union U3  func_1(void);
static int32_t  func_2(int8_t * p_3, int8_t * p_4, int8_t * p_5, struct S0  p_6, int8_t * p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_11 g_9 g_21 g_19 g_29 g_31
 * writes: g_9 g_19 g_22 g_31
 */
static union U3  func_1(void)
{ /* block id: 0 */
    int8_t *l_10 = (void*)0;
    int32_t *l_30 = &g_31;
    union U3 l_32[4][4] = {{{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L}}};
    int i, j;
    (*l_30) |= func_2(g_8[3], &g_9, l_10, g_11, &g_9);
    return l_32[0][3];
}


/* ------------------------------------------ */
/* 
 * reads : g_9 g_11.f0 g_21 g_19 g_29
 * writes: g_9 g_19 g_22
 */
static int32_t  func_2(int8_t * p_3, int8_t * p_4, int8_t * p_5, struct S0  p_6, int8_t * p_7)
{ /* block id: 1 */
    for (p_6.f0 = 0; (p_6.f0 < 46); ++p_6.f0)
    { /* block id: 4 */
        uint16_t *l_27 = (void*)0;
        int32_t l_28 = 0x9040C3F3L;
        for (g_9 = (-28); (g_9 >= (-30)); g_9--)
        { /* block id: 7 */
            int32_t *l_18 = &g_19[0][1];
            uint16_t l_23 = 0xD7AFL;
            (*g_21) = ((*l_18) = ((int16_t)g_11.f0 << (int16_t)p_6.f0));
            if (l_23)
                continue;
        }
        (*g_29) = (((uint16_t)((l_28 = ((-(uint16_t)g_9) != g_19[0][4])) != g_11.f0) % (uint16_t)g_9) | p_6.f0);
    }
    return p_6.f0;
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
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1
XXX total union variables: 1

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1
   depth: 6, occurrence: 2

XXX total number of pointers: 12

XXX times a variable address is taken: 9
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 6

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 6
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 12
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 33.3
XXX average alias set size: 1

XXX times a non-volatile is read: 15
XXX times a non-volatile is write: 9
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 3
XXX percentage of non-volatile access: 92.3

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 35.3
XXX percentage an existing variable is used: 64.7
********************* end of statistics **********************/

