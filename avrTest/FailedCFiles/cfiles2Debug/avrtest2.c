/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3947186455
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static volatile int16_t g_7 = 0xD130L;/* VOLATILE GLOBAL g_7 */
static int32_t g_8 = 0x3E9323D1L;
static int8_t g_11 = 0x15L;
static int8_t *g_12[4][3] = {{&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11}};
static volatile struct S0 g_14 = {4294967292UL};/* VOLATILE GLOBAL g_14 */
static volatile struct S0 * volatile g_13 = &g_14;/* VOLATILE GLOBAL g_13 */
static int32_t g_19[8][4] = {{0L,0L,(-1L),(-1L)},{0x7C5B1510L,0x7C5B1510L,0xA311C3FCL,0L},{0L,0L,0xA311C3FCL,0L},{0x7C5B1510L,0x70ED99EAL,(-1L),0xA311C3FCL},{0L,0x70ED99EAL,0x70ED99EAL,0L},{0x70ED99EAL,0L,0x7C5B1510L,0L},{0x70ED99EAL,0x7C5B1510L,0x70ED99EAL,(-1L)},{0L,0L,(-1L),(-1L)}};
static int32_t g_21 = 0x37BD55FDL;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_2(int8_t * p_3);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8 g_13 g_14.f0 g_19 g_21
 * writes: g_12 g_13 g_19 g_21
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int8_t *l_10 = &g_11;
    int8_t **l_9[4];
    int32_t *l_20 = &g_21;
    int i;
    for (i = 0; i < 4; i++)
        l_9[i] = &l_10;
    (*l_20) |= func_2((g_12[3][1] = (((int8_t)((-(uint32_t)g_7) | g_8) - (int8_t)g_8) , (void*)0)));
    return (*l_20);
}


/* ------------------------------------------ */
/* 
 * reads : g_13 g_14.f0 g_8 g_19
 * writes: g_13 g_19
 */
static int32_t  func_2(int8_t * p_3)
{ /* block id: 2 */
    volatile struct S0 * volatile *l_15 = &g_13;
    int32_t *l_18 = &g_19[0][1];
    (*l_15) = g_13;
    (*l_18) ^= ((uint8_t)((g_14.f0 != g_8) & g_8) >> (uint8_t)g_8);
    return (*l_18);
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
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 4
XXX total union variables: 0

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 6
   depth: 4, occurrence: 1
   depth: 6, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 10
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 7

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 9
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 25
XXX average alias set size: 1.12

XXX times a non-volatile is read: 10
XXX times a non-volatile is write: 6
XXX times a volatile is read: 3
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 1
XXX times a volatile is available for access: 2
XXX percentage of non-volatile access: 80

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 0
breakdown:
   depth: 0, occurrence: 5

XXX percentage a fresh-made variable is used: 36.4
XXX percentage an existing variable is used: 63.6
********************* end of statistics **********************/

