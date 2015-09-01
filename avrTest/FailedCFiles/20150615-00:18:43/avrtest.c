/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1238823773
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int16_t g_9[2][7] = {{0x80BEL,1L,1L,0x80BEL,0xCA98L,0xA1FAL,0xCA98L},{0x80BEL,1L,1L,0x80BEL,0xCA98L,0xA1FAL,0xCA98L}};
static int32_t g_11 = (-1L);
static int32_t *g_13 = (void*)0;
static int32_t * volatile g_16 = (void*)0;/* VOLATILE GLOBAL g_16 */
static uint16_t g_32 = 0x1815L;


/* --- FORWARD DECLARATIONS --- */
static uint16_t  func_1(void);
static int32_t  func_2(int32_t  p_3, uint32_t  p_4, int32_t  p_5, uint32_t  p_6, uint16_t  p_7);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9 g_11
 * writes: g_11 g_13 g_9 g_32
 */
static uint16_t  func_1(void)
{ /* block id: 0 */
    int16_t l_8[6];
    int32_t *l_17 = &g_11;
    int16_t *l_28 = &g_9[1][2];
    int32_t **l_29 = (void*)0;
    int8_t l_30 = 0x30L;
    uint16_t *l_31 = &g_32;
    int i;
    for (i = 0; i < 6; i++)
        l_8[i] = (-3L);
    (*l_17) = func_2((l_8[4] , l_8[5]), l_8[3], l_8[4], g_9[1][4], l_8[1]);
    (*l_17) = ((int16_t)((uint16_t)((*l_31) = ((int8_t)(((uint32_t)((l_29 = (((int16_t)((*l_28) ^= g_11) % (int16_t)g_11) , &g_13)) != &l_17) - (uint32_t)(*l_17)) | l_30) * (int8_t)0xE1L)) >> (uint16_t)g_11) + (int16_t)g_11);
    return (*l_17);
}


/* ------------------------------------------ */
/* 
 * reads : g_11 g_9
 * writes: g_11 g_13
 */
static int32_t  func_2(int32_t  p_3, uint32_t  p_4, int32_t  p_5, uint32_t  p_6, uint16_t  p_7)
{ /* block id: 1 */
    int32_t *l_10 = &g_11;
    (*l_10) |= (p_4 < p_3);
    for (p_7 = 0; (p_7 <= 1); p_7 += 1)
    { /* block id: 5 */
        int32_t **l_12[7] = {&l_10,(void*)0,(void*)0,&l_10,(void*)0,(void*)0,&l_10};
        int i;
        g_13 = (void*)0;
        for (p_5 = 0; (p_5 <= 1); p_5 += 1)
        { /* block id: 9 */
            int i, j;
            p_3 ^= ((*l_10) |= ((int8_t)0x8AL >> (int8_t)g_9[p_5][(p_5 + 3)]));
        }
    }
    return p_6;
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
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_9[i][j], "g_9[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 5
XXX total union variables: 0

XXX max expression depth: 12
breakdown:
   depth: 1, occurrence: 8
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 7, occurrence: 1
   depth: 12, occurrence: 1

XXX total number of pointers: 8

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 6
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 14

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 13
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 50
XXX average alias set size: 1.25

XXX times a non-volatile is read: 21
XXX times a non-volatile is write: 17
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 9
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 21.7
XXX percentage an existing variable is used: 78.3
********************* end of statistics **********************/

