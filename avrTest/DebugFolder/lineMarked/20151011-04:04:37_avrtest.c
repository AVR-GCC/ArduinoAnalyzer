/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.2.0
 * Git version: dcef523
 * Options:   --no-safe-math --no-math64 --no-bitfields --no-consts --no-float --no-divs --max-array-dim 2 --max-array-len-per-dim 8 --max-block-depth 2 --max-block-size 2 --max-expr-complexity 2 --max-funcs 4 --max-struct-fields 2 --max-union-fields 2 --no-volatiles --no-volatile-pointers --no-pointers --no-unions --no-safe-math --output /home/student/AVRfinal/avrTest/WorkFolder/avrtest.c
 * Seed:      3243214010
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 0xBEAA32B1L;
static uint8_t g_13[6] = {0UL,0UL,0UL,0xD5L,0UL,0xD5L};


/* --- FORWARD DECLARATIONS --- */
static int8_t  func_1(void);
static uint32_t  func_18(uint32_t  p_19, uint32_t  p_20, int8_t  p_21);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_13
 * writes: g_2
 */
static int8_t  func_1(void)
{ /* block id: 0 */
    int16_t l_11 = 0x85EDL;
    int32_t l_27 = 0x5540FFF0L;
    for (g_2 = (-8); (g_2 != (-22)); --g_2)
    { /* block id: 3 */
        int32_t l_10 = 0xF16EFA42L;
        int32_t l_12 = (-10L);
        uint32_t l_22 = 0UL;
        uint32_t l_23 = 1UL;
        l_12 = (((int8_t)(((int16_t)(-(uint32_t)l_10) << (int16_t)g_2) < l_10) >> (int8_t)l_11) <= l_10);
        for (l_10 = 5; (l_10 >= 0); l_10 -= 1)
        { /* block id: 7 */
            int i;
            l_12 = ((int16_t)((uint32_t)func_18(((g_13[l_10] == 0x6EC7L) , l_22), l_23, l_11) % (uint32_t)g_2) >> (int16_t)l_11); //this line is the problem!!!
            l_12 = ((int8_t)(l_27 = (func_18((l_12 , l_11), g_13[1], g_13[5]) ^ 1UL)) - (int8_t)0x57L);
        }
    }
    g_2 = (((uint16_t)l_11 << (uint16_t)g_2) == l_11);
    return l_11;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
static uint32_t  func_18(uint32_t  p_19, uint32_t  p_20, int8_t  p_21)
{ /* block id: 8 */
    uint8_t l_24 = 0xCEL;
    return l_24;
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
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 7
XXX total union variables: 0

XXX max expression depth: 8
breakdown:
   depth: 1, occurrence: 6
   depth: 2, occurrence: 2
   depth: 3, occurrence: 1
   depth: 5, occurrence: 1
   depth: 8, occurrence: 2

XXX total number of pointers: 0

XXX times a non-volatile is read: 22
XXX times a non-volatile is write: 7
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 8
XXX max block depth: 2
breakdown:
   depth: 0, occurrence: 4
   depth: 1, occurrence: 2
   depth: 2, occurrence: 2

XXX percentage a fresh-made variable is used: 29.2
XXX percentage an existing variable is used: 70.8
********************* end of statistics **********************/

