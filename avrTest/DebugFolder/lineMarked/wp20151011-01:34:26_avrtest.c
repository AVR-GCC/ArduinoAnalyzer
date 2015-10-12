#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static uint32_t g_8[3][2] = {{0x3C39BA09L, 0x3C39BA09L}, {0x3C39BA09L, 0x3C39BA09L}, {0x3C39BA09L, 0x3C39BA09L}};
static int32_t func_1(void);
int print0(int k, int count);
int8_t print1(int8_t k, int count);
uint32_t print2(uint32_t k, int count);
int print3(int k, int count);
int print4(int k, int count);
int print5(int k, int count);
static int32_t func_1(void)
{
  int8_t l_6[2];
  uint8_t l_7[2][8] = {{0UL, 1UL, 255UL, 0xE0L, 1UL, 1UL, 255UL, 255UL}, {255UL, 255UL, 255UL, 0xE0L, 255UL, 255UL, 255UL, 0xE0L}};
  int i;
  int j;
  for (i = print0(0, 35); i < 2; i++)
    l_6[i] = print1(0x20L, 36);

  g_8[0][0] = print2(((int16_t) (((uint16_t) l_6[0]) << ((uint16_t) l_7[1][7]))) >> ((int16_t) l_6[0]), 37);
  return g_8[0][1];
}


int main(int argc, char *argv[])
{
  int i;
  int j;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print3(1, 49);

  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = print4(0, 53); i < 3; i++)
  {
    for (j = print5(0, 55); j < 2; j++)
    {
      transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);

    }

  }

  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}


int print0(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int8_t print1(int8_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint32_t print2(uint32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print3(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print4(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print5(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


