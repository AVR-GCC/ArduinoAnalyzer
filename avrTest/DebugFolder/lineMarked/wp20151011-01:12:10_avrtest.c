#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static uint32_t g_4 = 0x182EAC45L;
static int32_t g_6 = 1L;
static uint32_t func_1(void);
static int32_t func_7(uint32_t p_8, uint32_t p_9);
int32_t print0(int32_t k, int count);
int32_t print1(int32_t k, int count);
uint16_t print2(uint16_t k, int count);
int print3(int k, int count);
static uint32_t func_1(void)
{
  uint32_t l_5 = 0xA9565E08L;
  int32_t l_11 = 0x8E9934B0L;
  g_6 ^= print0(((uint16_t) ((((g_4 > g_4) > l_5) & l_5, g_4))) + ((uint16_t) (-1L)), 36);
  l_11 = print1(func_7(l_5, g_4), 37);
  return g_4;
}


static int32_t func_7(uint32_t p_8, uint32_t p_9)
{
  uint16_t l_10 = 0UL;
  l_10 = print2(g_6 & 1L, 50);
  return l_10;
}


int main(int argc, char *argv[])
{
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print3(1, 61);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_4, "g_4", print_hash_value);
  transparent_crc(g_6, "g_6", print_hash_value);
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


int32_t print1(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint16_t print2(uint16_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print3(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


