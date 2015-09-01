/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      2001411872
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int32_t g_14 = (-1L);
static int32_t * volatile g_13 = &g_14;/* VOLATILE GLOBAL g_13 */
static int32_t g_17 = 0x3414B58EL;
static int8_t g_33[2] = {0x4DL,0x4DL};
static int32_t *g_37[3][8] = {{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14,&g_14,&g_14},{&g_14,&g_14,(void*)0,&g_14,&g_14,(void*)0,&g_14,&g_14},{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14,&g_14,&g_14}};
static int32_t ** volatile g_36 = &g_37[1][1];/* VOLATILE GLOBAL g_36 */
static int32_t *g_42 = &g_17;
static int32_t **g_41 = &g_42;


/* --- FORWARD DECLARATIONS --- */
static int16_t  func_1(void);
static int32_t * func_2(uint32_t  p_3, int32_t  p_4);
static uint32_t  func_5(int32_t  p_6, int32_t * p_7, int32_t * p_8, int32_t  p_9, uint8_t  p_10);
static int32_t  func_18(struct S0  p_19, int32_t  p_20, uint8_t  p_21);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_13 g_14 g_17 g_33 g_36
 * writes: g_17 g_14 g_37 g_41
 */
static int16_t  func_1(void)
{ /* block id: 0 */
    int32_t *l_15[1][6] = {{&g_14,&g_14,&g_14,&g_14,&g_14,&g_14}};
    int32_t *l_16 = &g_17;
    int i, j;
lbl_43:
    (*g_36) = func_2(func_5(((*l_16) = ((int8_t)(g_13 != l_15[0][4]) << (int8_t)g_14)), l_16, &g_14, g_14, g_14), g_33[1]);
    for (g_17 = 0; (g_17 <= (-18)); --g_17)
    { /* block id: 20 */
        int32_t **l_40 = &l_16;
        g_41 = l_40;
        if (g_17)
            goto lbl_43;
    }
    return g_17;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static int32_t * func_2(uint32_t  p_3, int32_t  p_4)
{ /* block id: 14 */
    int32_t l_34 = 7L;
    int32_t l_35 = 5L;
    l_35 ^= l_34;
    return &g_14;
}


/* ------------------------------------------ */
/* 
 * reads : g_17 g_14
 * writes: g_14 g_17
 */
static uint32_t  func_5(int32_t  p_6, int32_t * p_7, int32_t * p_8, int32_t  p_9, uint8_t  p_10)
{ /* block id: 2 */
    struct S0 l_22 = {-3L};
    if (func_18(l_22, l_22.f0, p_9))
    { /* block id: 6 */
        int32_t *l_27 = &l_22.f0;
        int32_t l_28 = 0x627E80A7L;
        int32_t *l_30 = &g_14;
        int32_t **l_29 = &l_30;
        (*p_7) = (((l_27 == (void*)0) | l_28) <= l_28);
        (*l_29) = &g_14;
    }
    else
    { /* block id: 9 */
        int32_t *l_32 = &g_14;
        int32_t **l_31 = &l_32;
        (*l_31) = &p_9;
        return g_17;
    }
    return g_14;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_14
 */
static int32_t  func_18(struct S0  p_19, int32_t  p_20, uint8_t  p_21)
{ /* block id: 3 */
    uint32_t l_25 = 0xB11F3813L;
    int32_t *l_26 = &g_14;
    (*l_26) = ((uint16_t)(((p_21 && 0x9041L) >= l_25) > p_19.f0) << (uint16_t)p_19.f0);
    return p_21;
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
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 10
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 11
breakdown:
   depth: 1, occurrence: 17
   depth: 2, occurrence: 1
   depth: 4, occurrence: 2
   depth: 5, occurrence: 1
   depth: 11, occurrence: 1

XXX total number of pointers: 17

XXX times a variable address is taken: 20
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 6
breakdown:
   depth: 1, occurrence: 6
XXX times a pointer is compared with null: 1
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 1
XXX times a pointer is qualified to be dereferenced: 15

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 12
XXX number of pointers point to pointers: 5
XXX number of pointers point to scalars: 12
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 5.88
XXX average alias set size: 1.18

XXX times a non-volatile is read: 25
XXX times a non-volatile is write: 14
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 95.1

XXX forward jumps: 0
XXX backward jumps: 1

XXX stmts: 15
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 9
   depth: 1, occurrence: 6

XXX percentage a fresh-made variable is used: 29.7
XXX percentage an existing variable is used: 70.3
********************* end of statistics **********************/

