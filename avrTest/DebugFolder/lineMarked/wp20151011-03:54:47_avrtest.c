#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static uint32_t g_5[3][2] = {{4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}, {4294967295UL, 4294967295UL}};
static int16_t g_8[1][8] = {{0x5FA3L, 0x5FA3L, 0x5FA3L, 0x5FA3L, 0x5FA3L, 0x5FA3L, 0x5FA3L, 0x5FA3L}};
static int8_t g_10 = 1L;
static uint16_t func_1(void);
int16_t print0(int16_t k, int count);
int16_t print1(int16_t k, int count);
int8_t print2(int8_t k, int count);
uint32_t print3(uint32_t k, int count);
int print4(int k, int count);
int print5(int k, int count);
int print6(int k, int count);
int print7(int k, int count);
int print8(int k, int count);
static uint16_t func_1(void)
{
  uint32_t l_4 = 4294967291UL;
  uint32_t l_9 = 0xCAA8E55AL;
  if ((((int16_t) (l_4 & g_5[1][0])) >> ((int16_t) g_5[1][1])) < (-1L))
  {
    int32_t l_6 = 0x439CB61DL;
    int16_t l_7 = 0x9FB1L;
    l_7 |= print0(l_6 > g_5[1][0], 40);
    g_8[0][3] = print1((((g_5[1][0] != l_4) | g_5[1][0]) >= l_4) == g_5[1][0], 41);
  }
  else
  {
    g_10 = print2(l_9 = print3(3L, 45), 45);
  }

  return l_4;
}


int main(int argc, char *argv[])
{
  int i;
  int j;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print4(1, 58);

  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = print5(0, 62); i < 3; i++)
  {
    for (j = print6(0, 64); j < 2; j++)
    {
      transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);

    }

  }

  for (i = print7(0, 71); i < 1; i++)
  {
    for (j = print8(0, 73); j < 8; j++)
    {
      transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);

    }

  }

  transparent_crc(g_10, "g_10", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}


int16_t print0(int16_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int16_t print1(int16_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int8_t print2(int8_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint32_t print3(uint32_t k, int count)
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


