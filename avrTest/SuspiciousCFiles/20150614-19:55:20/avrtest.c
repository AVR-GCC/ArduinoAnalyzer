/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3146103420
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_8[2] = {1UL,1UL};
static int32_t g_14[1][6] = {{0L,0L,0L,0L,0L,0L}};
static int32_t * volatile g_48 = &g_14[0][5];/* VOLATILE GLOBAL g_48 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_2(uint32_t  p_3, uint32_t  p_4, uint32_t  p_5, uint32_t  p_6);
static int32_t  func_18(int32_t * p_19, int32_t  p_20, int32_t  p_21, int32_t * p_22, int32_t * p_23);
static int32_t  func_28(int8_t  p_29, uint8_t  p_30, int32_t * p_31, uint32_t  p_32, int32_t * p_33);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_8 g_14 g_48
 * writes: g_14
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_7[2];
    int i;
    for (i = 0; i < 2; i++)
        l_7[i] = 0x124F84B8L;
    (*g_48) = func_2(l_7[1], l_7[0], l_7[1], g_8[0]);
    return (*g_48);
}


/* ------------------------------------------ */
/* 
 * reads : g_14 g_8
 * writes: g_14
 */
static int32_t  func_2(uint32_t  p_3, uint32_t  p_4, uint32_t  p_5, uint32_t  p_6)
{ /* block id: 1 */
    uint32_t l_15 = 18446744073709551608UL;
    int32_t *l_40 = &g_14[0][1];
    for (p_3 = 22; (p_3 == 19); p_3--)
    { /* block id: 4 */
        for (p_6 = (-30); (p_6 != 24); p_6 += 8)
        { /* block id: 7 */
            int32_t *l_13[7] = {&g_14[0][1],&g_14[0][1],&g_14[0][1],&g_14[0][1],&g_14[0][1],&g_14[0][1],&g_14[0][1]};
            int i;
            ++l_15;
        }
    }
    if (l_15)
    { /* block id: 11 */
        int32_t *l_46 = (void*)0;
        (*l_40) = func_18((((int16_t)((int32_t)func_28((((uint32_t)((int8_t)((uint8_t)(0xF995L ^ p_3) << (uint8_t)p_6) << (int8_t)6) % (uint32_t)g_14[0][1]) | 0xDAA2L), g_14[0][1], l_40, p_3, l_40) - (int32_t)4294967295UL) << (int16_t)g_8[0]) , l_46), p_6, p_3, l_40, l_40);
    }
    else
    { /* block id: 19 */
        (*l_40) &= ((p_5 , &g_14[0][1]) == (void*)0);
    }
    return g_14[0][1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t  func_18(int32_t * p_19, int32_t  p_20, int32_t  p_21, int32_t * p_22, int32_t * p_23)
{ /* block id: 16 */
    uint32_t l_47[2];
    int i;
    for (i = 0; i < 2; i++)
        l_47[i] = 0x796A450CL;
    return l_47[1];
}


/* ------------------------------------------ */
/* 
 * reads : g_8
 * writes: g_14
 */
static int32_t  func_28(int8_t  p_29, uint8_t  p_30, int32_t * p_31, uint32_t  p_32, int32_t * p_33)
{ /* block id: 12 */
    int32_t **l_41 = (void*)0;
    int32_t *l_43 = &g_14[0][2];
    int32_t **l_42 = &l_43;
    (*l_42) = &g_14[0][0];
    (*p_33) = ((int8_t)p_32 >> (int8_t)6);
    return g_8[0];
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
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 6
XXX total union variables: 0

XXX max expression depth: 19
breakdown:
   depth: 1, occurrence: 13
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 5, occurrence: 1
   depth: 19, occurrence: 1

XXX total number of pointers: 9

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 5
breakdown:
   depth: 1, occurrence: 5
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 8

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 9
XXX number of pointers point to pointers: 2
XXX number of pointers point to scalars: 7
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 22.2
XXX average alias set size: 1

XXX times a non-volatile is read: 27
XXX times a non-volatile is write: 12
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 95.1

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 13
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 9
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX percentage a fresh-made variable is used: 21.4
XXX percentage an existing variable is used: 78.6
********************* end of statistics **********************/

