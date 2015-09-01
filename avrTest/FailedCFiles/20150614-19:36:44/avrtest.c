/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1240374046
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_3[4][3] = {{(-10L),0x53606DE7L,(-10L)},{(-10L),0x53606DE7L,(-10L)},{(-10L),0x53606DE7L,(-10L)},{(-10L),0x53606DE7L,(-10L)}};
static int32_t g_5 = 0x3EB60693L;


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_6(uint8_t  p_7, int32_t * p_8, int32_t * p_9, uint16_t  p_10);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_5
 * writes: g_3 g_5
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_2 = &g_3[1][0];
    (*l_2) &= 0x3AE35568L;
    if (((*l_2) = ((-(uint16_t)0x8D52L) >= g_3[1][2])))
    { /* block id: 3 */
        int32_t l_11 = (-8L);
        for (g_5 = 0; (g_5 <= 2); g_5 += 1)
        { /* block id: 6 */
            int32_t *l_12 = &g_3[1][0];
            if (g_3[1][2])
                break;
            (*l_12) = func_6(l_11, &g_3[0][2], l_12, g_5);
        }
        (*l_2) = 7L;
    }
    else
    { /* block id: 15 */
        return g_3[2][0];
    }
    return (*l_2);
}


/* ------------------------------------------ */
/* 
 * reads : g_3 g_5
 * writes: g_3
 */
static int32_t  func_6(uint8_t  p_7, int32_t * p_8, int32_t * p_9, uint16_t  p_10)
{ /* block id: 8 */
    (*p_8) = (~g_3[1][2]);
    (*p_8) |= (g_5 && 1UL);
    return (*p_9);
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX max expression depth: 5
breakdown:
   depth: 1, occurrence: 12
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1
   depth: 5, occurrence: 1

XXX total number of pointers: 4

XXX times a variable address is taken: 3
XXX times a pointer is dereferenced on RHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 6
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 8

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 12
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 4
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 13
XXX times a non-volatile is write: 13
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 11
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 6
   depth: 1, occurrence: 3
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 16.7
XXX percentage an existing variable is used: 83.3
********************* end of statistics **********************/

