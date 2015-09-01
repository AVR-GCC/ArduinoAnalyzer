/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3096043624
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
union U0 {
   uint8_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static int32_t g_7 = 0x1AC48889L;
static int32_t *g_6 = &g_7;
static volatile int32_t g_37[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
static volatile int32_t * volatile g_36 = &g_37[0];/* VOLATILE GLOBAL g_36 */
static uint32_t g_38 = 0xAD4F6C55L;
static int16_t g_40 = 1L;
static int32_t g_42 = (-4L);
static int32_t ** volatile g_43 = &g_6;/* VOLATILE GLOBAL g_43 */


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static union U0  func_4(int32_t * p_5);
static int32_t * func_14(int32_t  p_15, int32_t * p_16, int32_t * p_17, int32_t * p_18, union U0  p_19);
static int16_t  func_25(int32_t  p_26, uint32_t  p_27, int32_t ** p_28, int16_t  p_29, int32_t ** p_30);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7 g_36 g_38 g_42 g_43
 * writes: g_7 g_6 g_40 g_42
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    uint32_t l_2 = 0xA8B108F8L;
    int32_t l_3 = 4L;
    l_3 = (l_2 < (-5L));
    (*g_43) = (func_4(g_6) , &l_3);
    return g_42;
}


/* ------------------------------------------ */
/* 
 * reads : g_7 g_6 g_36 g_38 g_42
 * writes: g_7 g_6 g_40 g_42
 */
static union U0  func_4(int32_t * p_5)
{ /* block id: 2 */
    int32_t *l_20 = (void*)0;
    union U0 l_21 = {0UL};
    int16_t *l_39 = &g_40;
    int32_t *l_41 = &g_42;
    (*p_5) = 0xB13281D2L;
    (*l_41) &= ((uint16_t)(((*l_39) = ((int16_t)(((uint8_t)((p_5 = func_14(g_7, &g_7, l_20, &g_7, l_21)) != g_36) % (uint8_t)g_38) < 255UL) % (int16_t)l_21.f0)) >= 1L) >> (uint16_t)10);
    return l_21;
}


/* ------------------------------------------ */
/* 
 * reads : g_7 g_6
 * writes: g_6 g_7
 */
static int32_t * func_14(int32_t  p_15, int32_t * p_16, int32_t * p_17, int32_t * p_18, union U0  p_19)
{ /* block id: 4 */
    int32_t **l_22 = &g_6;
    (*l_22) = (void*)0;
    for (p_15 = (-7); (p_15 == 7); p_15++)
    { /* block id: 8 */
        int32_t **l_31 = &g_6;
        if ((*p_16))
        { /* block id: 9 */
            int32_t **l_32 = &g_6;
            (*p_18) = (((func_25(g_7, g_7, l_31, p_19.f0, l_32) == p_19.f0) & 1UL) ^ p_19.f0);
            return (*l_32);
        }
        else
        { /* block id: 23 */
            (*p_16) ^= ((int8_t)p_19.f0 * (int8_t)p_19.f0);
            return p_17;
        }
    }
    return (*l_22);
}


/* ------------------------------------------ */
/* 
 * reads : g_7
 * writes: g_7
 */
static int16_t  func_25(int32_t  p_26, uint32_t  p_27, int32_t ** p_28, int16_t  p_29, int32_t ** p_30)
{ /* block id: 10 */
    int8_t l_33[8];
    int i;
    for (i = 0; i < 8; i++)
        l_33[i] = 0L;
    for (p_29 = 0; (p_29 <= 7); p_29 += 1)
    { /* block id: 13 */
        for (g_7 = 7; (g_7 >= 0); g_7 -= 1)
        { /* block id: 16 */
            int i;
            if (l_33[p_29])
                break;
        }
    }
    return l_33[1];
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
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 9
XXX total union variables: 1

XXX max expression depth: 14
breakdown:
   depth: 1, occurrence: 17
   depth: 2, occurrence: 5
   depth: 3, occurrence: 1
   depth: 9, occurrence: 1
   depth: 14, occurrence: 1

XXX total number of pointers: 16

XXX times a variable address is taken: 11
XXX times a pointer is dereferenced on RHS: 3
breakdown:
   depth: 1, occurrence: 3
XXX times a pointer is dereferenced on LHS: 7
breakdown:
   depth: 1, occurrence: 7
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 15

XXX max dereference level: 2
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 13
   level: 2, occurrence: 5
XXX number of pointers point to pointers: 6
XXX number of pointers point to scalars: 10
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 31.2
XXX average alias set size: 1.25

XXX times a non-volatile is read: 30
XXX times a non-volatile is write: 18
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 96

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 18
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 11
   depth: 1, occurrence: 2
   depth: 2, occurrence: 5

XXX percentage a fresh-made variable is used: 23.7
XXX percentage an existing variable is used: 76.3
********************* end of statistics **********************/

