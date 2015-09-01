/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      2603794241
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   int8_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int8_t  f0;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static uint32_t g_6[2] = {0x4B283066L,0x4B283066L};
static volatile int32_t g_14 = 0x35637001L;/* VOLATILE GLOBAL g_14 */
static uint32_t g_18 = 1UL;
static struct S1 g_23 = {0x7BL};
static struct S1 *g_22 = &g_23;
static uint32_t g_28 = 0xAA9C1C73L;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static int32_t  func_2(int8_t  p_3, struct S0  p_4, uint16_t  p_5);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_18 g_22 g_14
 * writes: g_18 g_22 g_28
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    struct S0 l_7 = {0xCBL,0L};
    g_28 = func_2(g_6[0], l_7, l_7.f1);
    return g_14;
}


/* ------------------------------------------ */
/* 
 * reads : g_6 g_18 g_22
 * writes: g_18 g_22
 */
static int32_t  func_2(int8_t  p_3, struct S0  p_4, uint16_t  p_5)
{ /* block id: 1 */
    int8_t *l_12 = (void*)0;
    int32_t l_13 = 0xC2DA8AFCL;
    if (((uint8_t)((l_13 = ((uint8_t)0xD9L + (uint8_t)0x40L)) | g_6[0]) << (uint8_t)g_6[1]))
    { /* block id: 3 */
        struct S1 *l_25 = &g_23;
        if ((0xF5FAL == g_6[0]))
        { /* block id: 4 */
            int32_t *l_15 = &l_13;
            int32_t *l_16 = &l_13;
            int32_t *l_17[2][1];
            int8_t *l_21 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_17[i][j] = (void*)0;
            }
            g_18--;
            (*l_15) ^= ((p_4.f0 = p_3) & g_6[0]);
        }
        else
        { /* block id: 8 */
            struct S1 **l_24[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_24[i][j] = (void*)0;
            }
            g_22 = (l_25 = g_22);
        }
    }
    else
    { /* block id: 12 */
        return g_6[0];
    }
    for (p_4.f0 = 1; (p_4.f0 <= (-4)); p_4.f0 -= 7)
    { /* block id: 17 */
        return l_13;
    }
    return g_18;
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
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 9
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 4, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 4
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 9

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 2
XXX number of pointers point to pointers: 1
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 2
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1

XXX times a non-volatile is read: 13
XXX times a non-volatile is write: 9
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 7
XXX percentage of non-volatile access: 95.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 11
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 3
   depth: 2, occurrence: 3

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

