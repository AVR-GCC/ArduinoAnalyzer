/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1776375513
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_12 = 0x7CCC8959L;
static int32_t g_14 = 3L;
static int32_t g_24[5][2] = {{(-9L),(-9L)},{0L,(-9L)},{0xA87A5EAFL,0xA87A5EAFL},{0xA87A5EAFL,(-9L)},{0L,(-9L)}};
static int32_t * volatile g_23 = &g_24[0][1];/* VOLATILE GLOBAL g_23 */
static struct S0 g_37 = {0xBBL,0UL};
static int32_t g_43 = (-9L);
static int32_t * volatile g_42 = &g_43;/* VOLATILE GLOBAL g_42 */


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static int32_t  func_5(uint32_t  p_6);
static int32_t  func_15(uint16_t  p_16, int32_t  p_17, int32_t * p_18, int32_t * p_19, int32_t * p_20);
static struct S0  func_27(struct S0  p_28, uint32_t  p_29);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_14 g_23 g_24 g_37 g_42 g_43
 * writes: g_12 g_14 g_24 g_43
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_4 = 0x1D925B0EL;
    int32_t *l_21 = &g_14;
    uint32_t l_38 = 8UL;
    if (((uint16_t)l_4 + (uint16_t)l_4))
    { /* block id: 1 */
        uint8_t l_7 = 0x07L;
        int32_t *l_13 = &g_14;
        (*l_13) |= func_5((l_4 ^ l_7));
        (*g_23) ^= ((*l_21) = func_15(l_4, g_14, &g_14, l_21, l_13));
    }
    else
    { /* block id: 11 */
        struct S0 l_30[2][8] = {{{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL}},{{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL},{0x27L,8UL}}};
        int i, j;
        for (l_4 = 0; (l_4 <= 1); l_4 += 1)
        { /* block id: 14 */
            l_38 |= (((uint16_t)func_5((func_27(l_30[1][4], g_24[0][1]) , g_24[0][0])) * (uint16_t)l_30[1][4].f1) ^ 0UL);
        }
        (*g_42) |= ((uint16_t)((((!l_30[1][4].f1) ^ g_24[1][1]) >= 0x64F8L) ^ g_14) * (uint16_t)(*l_21));
    }
    return (*l_21);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_12
 */
static int32_t  func_5(uint32_t  p_6)
{ /* block id: 2 */
    int32_t l_10 = 0x412DF3D3L;
    int32_t l_11 = 0xCDC345FEL;
    g_12 = ((uint8_t)(l_10 = 0xD9L) >> (uint8_t)l_11);
    return l_10;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_15(uint16_t  p_16, int32_t  p_17, int32_t * p_18, int32_t * p_19, int32_t * p_20)
{ /* block id: 7 */
    int8_t l_22 = 4L;
    return l_22;
}


/* ------------------------------------------ */
/* 
 * reads : g_37
 * writes:
 */
static struct S0  func_27(struct S0  p_28, uint32_t  p_29)
{ /* block id: 15 */
    int32_t *l_31 = &g_24[0][0];
    int32_t *l_32[4] = {&g_14,&g_14,&g_14,&g_14};
    int32_t l_33 = (-1L);
    uint16_t l_34 = 0xF37EL;
    int i;
    ++l_34;
    return g_37;
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
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 10
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 11
   depth: 2, occurrence: 2
   depth: 3, occurrence: 2
   depth: 5, occurrence: 1
   depth: 7, occurrence: 2

XXX total number of pointers: 6

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 4
breakdown:
   depth: 1, occurrence: 4
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 273

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 14
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1.17

XXX times a non-volatile is read: 24
XXX times a non-volatile is write: 11
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 14
XXX percentage of non-volatile access: 94.6

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 12
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 4
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 15.2
XXX percentage an existing variable is used: 84.8
********************* end of statistics **********************/

