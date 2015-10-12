#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static int32_t g_2[1] = {-2L};
static int8_t g_11[5] = {1L, 1L, 1L, 1L, 1L};
static uint32_t func_1(void);
int32_t print0(int32_t k, int count);
int8_t print1(int8_t k, int count);
int print2(int k, int count);
int print3(int k, int count);
int print4(int k, int count);
static uint32_t func_1(void)
{
  uint32_t l_10 = 0xF3F17E2FL;
  for (g_2[0] = print0(-3, 34); g_2[0] != (-11); g_2[0]--)
  {
    int32_t l_9[4][6] = {{0L, 0L, 0L, 0xC4F27D27L, -5L, -5L}, {0L, 0xC4F27D27L, 0L, -5L, -5L, -5L}, {0xC4F27D27L, 0xC4F27D27L, 0xC4F27D27L, -5L, 0L, -5L}, {0xC4F27D27L, -5L, 0xC4F27D27L, 0L, 0L, 0L}};
    int i;
    int j;
    g_11[2] &= print1((((int16_t) (((uint8_t) ((g_2[0] & g_2[0]) > l_9[2][3])) + ((uint8_t) 0xA3L))) * ((int16_t) l_10)) >= g_2[0], 38);
  }

  return l_10;
}


int main(int argc, char *argv[])
{
  int i;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print2(1, 51);

  platform_main_begin();
  crc32_gentab();
  func_1();
  for (i = print3(0, 55); i < 1; i++)
  {
    transparent_crc(g_2[i], "g_2[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);

  }

  for (i = print4(0, 61); i < 5; i++)
  {
    transparent_crc(g_11[i], "g_11[i]", print_hash_value);
    if (print_hash_value)
      printf("index = [%d]\n", i);

  }

  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}


int32_t print0(int32_t k, int count)
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


int print2(int k, int count)
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


