/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      3036840403
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
};

/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_9[5] = {0xB7161AB6L,0xB7161AB6L,0xB7161AB6L,0xB7161AB6L,0xB7161AB6L};
static uint32_t g_10 = 0UL;
static int8_t g_12 = 0L;
static int8_t *g_17 = (void*)0;
static int8_t **g_16 = &g_17;
static struct S0 g_23 = {255UL};


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);
static struct S0  func_2(int8_t  p_3, uint32_t  p_4, int8_t  p_5, uint32_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_9 g_10 g_12
 * writes: g_12 g_16 g_23
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    int8_t *l_11 = &g_12;
    int32_t l_13 = 0x08A11015L;
    struct S0 *l_22 = &g_23;
    (*l_22) = func_2(((*l_11) ^= ((uint16_t)g_9[4] % (uint16_t)g_10)), g_10, g_10, l_13);
    return l_13;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: g_16
 */
static struct S0  func_2(int8_t  p_3, uint32_t  p_4, int8_t  p_5, uint32_t  p_6)
{ /* block id: 2 */
    int8_t **l_20 = &g_17;
    struct S0 l_21 = {0xE1L};
    for (p_3 = (-20); (p_3 <= 18); p_3 += 5)
    { /* block id: 5 */
        int8_t **l_19 = &g_17;
        int8_t ***l_18[5][2] = {{&l_19,(void*)0},{&l_19,&l_19},{(void*)0,&l_19},{&l_19,(void*)0},{&l_19,&l_19}};
        int i, j;
        l_20 = (g_16 = (void*)0);
    }
    return l_21;
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
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 7
breakdown:
   depth: 1, occurrence: 4
   depth: 2, occurrence: 2
   depth: 7, occurrence: 1

XXX total number of pointers: 7

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 0
breakdown:
XXX times a pointer is dereferenced on LHS: 2
breakdown:
   depth: 1, occurrence: 2
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 0

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 3
XXX number of pointers point to pointers: 4
XXX number of pointers point to scalars: 2
XXX number of pointers point to structs: 1
XXX percent of pointers has null in alias set: 57.1
XXX average alias set size: 1.43

XXX times a non-volatile is read: 8
XXX times a non-volatile is write: 7
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 93.8

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 5
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

