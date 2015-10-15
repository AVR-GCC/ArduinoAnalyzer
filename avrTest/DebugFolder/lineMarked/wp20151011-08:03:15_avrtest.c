#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static int32_t g_2[7] = {0xFDF99FF6L, 0xFDF99FF6L, 0xFDF99FF6L, 0xFDF99FF6L, 0xFDF99FF6L, 0xFDF99FF6L, 0xFDF99FF6L};
static int32_t g_15[3][7] = {{0xC32B96CEL, 0L, 0x28F4E1C2L, 0x28F4E1C2L, 0x9378F1E0L, 0x28F4E1C2L, -1L}, {0L, 0x863CC1DAL, -1L, -1L, 0xC32B96CEL, -1L, 0x9378F1E0L}, {0x863CC1DAL, 0x28F4E1C2L, -1L, -1L, 0L, -1L, 0xC32B96CEL}};
static uint32_t g_18 = 0xA80278EEL;
static int32_t func_1(void);
int32_t print0(int32_t k, int count);
uint32_t print1(uint32_t k, int count);
int32_t print2(int32_t k, int count);
int32_t print3(int32_t k, int count);
int32_t print4(int32_t k, int count);
int print5(int k, int count);
int print6(int k, int count);
int print7(int k, int count);
int print8(int k, int count);
static int32_t func_1(void)
{
  uint8_t l_16 = 1UL;
  for (g_2[5] = print0(8, 35); g_2[5] > (-20); --g_2[5])
  {
    uint8_t l_14 = 9UL;
    int32_t l_17 = 0x8DC164F9L;
    g_18 = print1((((int16_t) ((l_17 ^= print2((((uint8_t) (-((uint8_t) (g_15[0][2] |= print3(((uint16_t) ((((int16_t) (l_14 <= g_2[0])) * ((int16_t) 0L)) ^ 250UL)) * ((uint16_t) g_2[5]), 39))))) + ((uint8_t) g_2[6]), l_16), 39)) && 0xF780L)) % ((int16_t) l_14)) ^ 0UL, 39);
    l_17 = print4(g_15[0][0], 40);
  }

  return g_15[2][5];
}


int main(int argc, char *argv[])
{
  int i;
  int j;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print5(1, 53);

  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = print6(0, 57); i < 7; i++)
  {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);

  }

  for (i = print7(0, 63); i < 3; i++)
  {
    for (j = print8(0, 65); j < 7; j++)
    {
      transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);

    }

  }

  transparent_crc(g_18, "g_18", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}


int32_t print0(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint32_t print1(uint32_t k, int count)
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


int32_t print3(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print4(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print5(int k, int count)
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


