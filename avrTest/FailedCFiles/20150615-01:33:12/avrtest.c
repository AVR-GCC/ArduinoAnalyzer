/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3811654867
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = (-5L);
static int32_t g_12[2][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
static int32_t *g_21 = &g_12[1][2];
static int32_t **g_20[6][1] = {{&g_21},{&g_21},{&g_21},{&g_21},{&g_21},{&g_21}};
static volatile int32_t g_23 = 0x43AF7806L;/* VOLATILE GLOBAL g_23 */
static volatile int32_t g_24 = 9L;/* VOLATILE GLOBAL g_24 */
static volatile int32_t g_25 = 0x17F215A6L;/* VOLATILE GLOBAL g_25 */
static volatile int32_t g_26 = 0x5BB00289L;/* VOLATILE GLOBAL g_26 */
static int32_t g_27 = 0x80278EE3L;
static uint32_t g_32 = 0UL;
static int32_t * volatile g_35 = &g_27;/* VOLATILE GLOBAL g_35 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static int32_t  func_15(int32_t * p_16, uint32_t  p_17, int32_t ** p_18);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_12 g_20 g_27 g_21 g_35
 * writes: g_2 g_12 g_27 g_21 g_32
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int32_t l_9 = (-2L);
    for (g_2 = (-25); (g_2 != 27); g_2++)
    { /* block id: 3 */
        int8_t l_10 = 0x6EL;
        int32_t *l_11 = &g_12[1][2];
        (*l_11) = (l_10 = ((int16_t)((int16_t)l_9 * (int16_t)g_2) >> (int16_t)l_9));
        if ((*l_11))
        { /* block id: 6 */
            int32_t *l_13 = (void*)0;
            int32_t **l_14 = &l_13;
            (*l_14) = l_13;
        }
        else
        { /* block id: 8 */
            int16_t l_19[2][8];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 8; j++)
                    l_19[i][j] = 0x4DF6L;
            }
            (*l_11) = func_15(l_11, l_19[1][2], g_20[0][0]);
            (*g_35) |= ((int16_t)(g_12[1][2] , l_9) * (int16_t)(*l_11));
        }
    }
    return (*g_35);
}


/* ------------------------------------------ */
/* 
 * reads : g_27 g_21
 * writes: g_27 g_12 g_21 g_32
 */
static int32_t  func_15(int32_t * p_16, uint32_t  p_17, int32_t ** p_18)
{ /* block id: 9 */
    int16_t l_22[8][4] = {{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}};
    int i, j;
    for (p_17 = 0; (p_17 <= 1); p_17 += 1)
    { /* block id: 12 */
        if (l_22[1][2])
            break;
        for (g_27 = 1; (g_27 >= 0); g_27 -= 1)
        { /* block id: 16 */
            int i, j;
            g_12[p_17][(p_17 + 1)] = 0L;
            (*p_18) = &g_12[p_17][p_17];
        }
    }
    (**p_18) = ((int16_t)((uint32_t)(g_32 = g_27) - (uint32_t)p_17) * (int16_t)l_22[3][0]);
    return l_22[1][2];
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_12[i][j], "g_12[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
XXX total union variables: 0

XXX max expression depth: 4
breakdown:
   depth: 1, occurrence: 14
   depth: 2, occurrence: 3
   depth: 3, occurrence: 1
   depth: 4, occurrence: 3

XXX total number of pointers: 8

XXX times a variable address is taken: 8
XXX times a pointer is dereferenced on RHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 5
   depth: 2, occurrence: 1
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 16

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 14
   level: 2, occurrence: 1
XXX number of pointers point to pointers: 3
XXX number of pointers point to scalars: 5
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 12.5
XXX average alias set size: 1

XXX times a non-volatile is read: 22
XXX times a non-volatile is write: 18
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 10
XXX percentage of non-volatile access: 95.2

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 14
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 4
   depth: 2, occurrence: 5

XXX percentage a fresh-made variable is used: 30.4
XXX percentage an existing variable is used: 69.6
********************* end of statistics **********************/

