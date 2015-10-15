#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static uint16_t g_2 = 0x9696L;
static int32_t g_11 = 7L;
static uint32_t func_1(void);
int print0(int k, int count);
int print1(int k, int count);
uint8_t print2(uint8_t k, int count);
int32_t print3(int32_t k, int count);
int print4(int k, int count);
static uint32_t func_1(void)
{
  uint32_t l_3 = 6UL;
  if (g_2 && l_3)
  {
    uint8_t l_10[2][7];
    int i;
    int j;
    for (i = print0(0, 38); i < 2; i++)
    {
      for (j = print1(0, 40); j < 7; j++)
        l_10[i][j] = print2(0xD4L, 41);

    }

    g_11 = print3(((int16_t) (((uint8_t) (((uint16_t) ((g_2 || 0x51L, 1UL))) >> ((uint16_t) g_2))) % ((uint8_t) l_10[1][3]))) << ((int16_t) 4), 43);
  }
  else
  {
    return l_3;
  }

  return l_3;
}


int main(int argc, char *argv[])
{
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print4(1, 59);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
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


int print1(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint8_t print2(uint8_t k, int count)
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


int print4(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


