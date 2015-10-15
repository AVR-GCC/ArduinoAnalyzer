#include "csmith.h"
#include <stdio.h>

    static long __undefined;
struct S0
{
  uint32_t f0;
};
static volatile int16_t g_7 = 0xD130L;
static int32_t g_8 = 0x3E9323D1L;
static int8_t g_11 = 0x15L;
static int8_t *g_12[4][3] = {{&g_11, &g_11, &g_11}, {&g_11, &g_11, &g_11}, {&g_11, &g_11, &g_11}, {&g_11, &g_11, &g_11}};
static volatile struct S0 g_14 = {4294967292UL};
static volatile struct S0 * volatile g_13 = &g_14;
static int32_t g_19[8][4] = {{0L, 0L, -1L, -1L}, {0x7C5B1510L, 0x7C5B1510L, 0xA311C3FCL, 0L}, {0L, 0L, 0xA311C3FCL, 0L}, {0x7C5B1510L, 0x70ED99EAL, -1L, 0xA311C3FCL}, {0L, 0x70ED99EAL, 0x70ED99EAL, 0L}, {0x70ED99EAL, 0L, 0x7C5B1510L, 0L}, {0x70ED99EAL, 0x7C5B1510L, 0x70ED99EAL, -1L}, {0L, 0L, -1L, -1L}};
static int32_t g_21 = 0x37BD55FDL;
static int32_t func_1(void);
static int32_t func_2(int8_t *p_3);
int print0(int k, int count);
int8_t **print1(int8_t **k, int count);
int32_t print2(int32_t k, int count);
int8_t *print3(int8_t *k, int count);
volatile struct S0 * volatile print4(volatile struct S0 * volatile k, int count);
int32_t print5(int32_t k, int count);
int print6(int k, int count);
int print7(int k, int count);
int print8(int k, int count);
static int32_t func_1(void)
{
  int8_t *l_10 = &g_11;
  int8_t **l_9[4];
  int32_t *l_20 = &g_21;
  int i;
  for (i = print0(0, 48); i < 4; i++)
    l_9[i] = print1(&l_10, 49);

  *l_20 |= print2(func_2(g_12[3][1] = print3((((int8_t) ((-((uint32_t) g_7)) | g_8)) - ((int8_t) g_8), (void *) 0), 50)), 50);
  return *l_20;
}


static int32_t func_2(int8_t *p_3)
{
  volatile struct S0 * volatile *l_15 = &g_13;
  int32_t *l_18 = &g_19[0][1];
  *l_15 = print4(g_13, 64);
  *l_18 ^= print5(((uint8_t) ((g_14.f0 != g_8) & g_8)) >> ((uint8_t) g_8), 65);
  return *l_18;
}


int main(int argc, char *argv[])
{
  int i;
  int j;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print6(1, 77);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8, "g_8", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
  for (i = print7(0, 85); i < 8; i++)
  {
    for (j = print8(0, 87); j < 4; j++)
    {
      transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);

    }

  }

  transparent_crc(g_21, "g_21", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}


int print0(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int8_t **print1(int8_t **k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print2(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int8_t *print3(int8_t *k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


volatile struct S0 * volatile print4(volatile struct S0 * volatile k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print5(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print6(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print7(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print8(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


