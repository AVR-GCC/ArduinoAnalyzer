/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1976566648
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   volatile int32_t  f0;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static uint16_t g_18 = 0x3AAFL;
static struct S1 g_22[8][2] = {{{0x0BL},{0x9CL}},{{0x9CL},{0x0BL}},{{0x9CL},{0x9CL}},{{0x0BL},{0x9CL}},{{0x9CL},{0x0BL}},{{0x9CL},{0x9CL}},{{0x0BL},{0x9CL}},{{0x9CL},{0x0BL}}};
static int32_t g_30 = 0x5300CE3DL;
static int32_t * volatile g_29 = &g_30;/* VOLATILE GLOBAL g_29 */
static struct S1 * volatile g_31 = &g_22[3][0];/* VOLATILE GLOBAL g_31 */
static struct S0 g_32 = {0L};/* VOLATILE GLOBAL g_32 */


/* --- FORWARD DECLARATIONS --- */
static struct S0  func_1(void);
static struct S1  func_2(uint16_t  p_3, struct S1  p_4, uint32_t  p_5, int16_t  p_6);
static uint16_t  func_7(uint32_t  p_8);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_18 g_22 g_29 g_30 g_31 g_32
 * writes: g_18 g_30 g_22
 */
static struct S0  func_1(void)
{ /* block id: 0 */
    uint16_t *l_21 = &g_18;
    int32_t l_23 = 0x1DFE936BL;
    (*g_31) = func_2((((*l_21) = func_7(((uint8_t)((int8_t)0xBAL - (int8_t)1UL) * (uint8_t)1L))) , g_18), g_22[3][0], l_23, l_23);
    return g_32;
}


/* ------------------------------------------ */
/* 
 * reads : g_22.f0 g_29 g_30 g_22
 * writes: g_30
 */
static struct S1  func_2(uint16_t  p_3, struct S1  p_4, uint32_t  p_5, int16_t  p_6)
{ /* block id: 14 */
    uint16_t *l_28[3][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_18,(void*)0,&g_18,&g_18,(void*)0},{(void*)0,&g_18,&g_18,(void*)0,&g_18}};
    int i, j;
    (*g_29) |= ((int16_t)((uint8_t)(((l_28[1][0] != &p_3) | p_4.f0) , 0xDAL) << (uint8_t)0) << (int16_t)g_22[3][0].f0);
    return g_22[3][0];
}


/* ------------------------------------------ */
/* 
 * reads : g_18
 * writes: g_18
 */
static uint16_t  func_7(uint32_t  p_8)
{ /* block id: 1 */
    int32_t l_14 = 0L;
    l_14 ^= ((!p_8) , p_8);
    for (l_14 = 0; (l_14 > 14); l_14++)
    { /* block id: 5 */
        uint16_t l_17 = 1UL;
        if (l_17)
        { /* block id: 6 */
            if (l_17)
                break;
        }
        else
        { /* block id: 8 */
            --g_18;
        }
    }
    return g_18;
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
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_22[i][j].f0, "g_22[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2
XXX total union variables: 0

XXX max expression depth: 10
breakdown:
   depth: 1, occurrence: 10
   depth: 2, occurrence: 2
   depth: 6, occurrence: 1
   depth: 10, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 5
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 1
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 4
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 3
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1.25

XXX times a non-volatile is read: 15
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 2
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 91.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 10
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 7
   depth: 1, occurrence: 1
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 41.2
XXX percentage an existing variable is used: 58.8
********************* end of statistics **********************/

