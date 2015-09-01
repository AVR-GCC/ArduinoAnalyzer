/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --output /specific/a/home/cc/students/cs/alonelmaliah//Desktop/avrTest/WorkFolder/avrtest.c
 * Seed:      1111393781
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint32_t  f1;
};

struct S1 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S3 {
   struct S1  f0;
   uint32_t  f1;
};
#pragma pack(pop)

/* --- GLOBAL VARIABLES --- */
static int16_t g_7 = 0xF8B5L;
static struct S1 g_8 = {18446744073709551615UL};
static struct S3 g_9 = {{0xD42CA8CDL},4UL};
static int32_t g_11 = 0xA29F5838L;
static uint16_t g_20[6][3] = {{0UL,4UL,0x7525L},{0x0C0EL,4UL,0x0C0EL},{0x1DE9L,0UL,0x7525L},{0x1DE9L,0x1DE9L,0UL},{0x0C0EL,0UL,0UL},{0UL,4UL,0x7525L}};
static uint16_t g_22 = 0xB07FL;
static int32_t *g_25 = &g_11;
static int32_t g_27 = (-5L);
static int32_t * volatile g_26 = &g_27;/* VOLATILE GLOBAL g_26 */


/* --- FORWARD DECLARATIONS --- */
static uint8_t  func_1(void);
static struct S0  func_2(int16_t  p_3, struct S1  p_4, struct S3  p_5, int8_t  p_6);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_7 g_8 g_9 g_11 g_20 g_22 g_25 g_26 g_27
 * writes: g_11 g_20 g_22 g_25 g_27
 */
static uint8_t  func_1(void)
{ /* block id: 0 */
    int8_t l_13[6] = {1L,0x18L,1L,1L,0x18L,1L};
    int32_t *l_14 = &g_11;
    uint16_t *l_19 = &g_20[4][2];
    uint16_t *l_21 = &g_22;
    int i;
    (*l_14) = (func_2(g_7, g_8, g_9, g_8.f0) , l_13[5]);
    if (((uint16_t)((uint16_t)((*l_21) |= ((*l_19) |= 0x413FL)) % (uint16_t)65535UL) << (uint16_t)g_9.f0.f0))
    { /* block id: 7 */
        (*l_14) &= ((((int8_t)((g_25 = &g_11) != l_14) * (int8_t)g_9.f0.f0) ^ g_9.f1) || g_20[3][1]);
    }
    else
    { /* block id: 10 */
        (*g_26) |= ((*g_25) &= 0x0D40A7FCL);
    }
    return (*l_14);
}


/* ------------------------------------------ */
/* 
 * reads : g_11
 * writes: g_11
 */
static struct S0  func_2(int16_t  p_3, struct S1  p_4, struct S3  p_5, int8_t  p_6)
{ /* block id: 1 */
    int32_t *l_10 = &g_11;
    struct S0 l_12[6][1] = {{{0x79CD329BL,18446744073709551606UL}},{{0x79CD329BL,18446744073709551606UL}},{{0x79CD329BL,18446744073709551606UL}},{{0x79CD329BL,18446744073709551606UL}},{{0x79CD329BL,18446744073709551606UL}},{{0x79CD329BL,18446744073709551606UL}}};
    int i, j;
    (*l_10) &= p_6;
    return l_12[4][0];
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
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_9.f0.f0, "g_9.f0.f0", print_hash_value);
    transparent_crc(g_9.f1, "g_9.f1", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 2
breakdown:
   depth: 0, occurrence: 3
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1
XXX total union variables: 0

XXX max expression depth: 6
breakdown:
   depth: 1, occurrence: 7
   depth: 2, occurrence: 1
   depth: 5, occurrence: 1
   depth: 6, occurrence: 2

XXX total number of pointers: 6

XXX times a variable address is taken: 7
XXX times a pointer is dereferenced on RHS: 1
breakdown:
   depth: 1, occurrence: 1
XXX times a pointer is dereferenced on LHS: 7
breakdown:
   depth: 1, occurrence: 7
XXX times a pointer is compared with null: 0
XXX times a pointer is compared with address of another variable: 0
XXX times a pointer is compared with another pointer: 0
XXX times a pointer is qualified to be dereferenced: 10

XXX max dereference level: 1
breakdown:
   level: 0, occurrence: 0
   level: 1, occurrence: 18
XXX number of pointers point to pointers: 0
XXX number of pointers point to scalars: 6
XXX number of pointers point to structs: 0
XXX percent of pointers has null in alias set: 0
XXX average alias set size: 1

XXX times a non-volatile is read: 14
XXX times a non-volatile is write: 14
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 96.6

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 7
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 5
   depth: 1, occurrence: 2

XXX percentage a fresh-made variable is used: 40
XXX percentage an existing variable is used: 60
********************* end of statistics **********************/

