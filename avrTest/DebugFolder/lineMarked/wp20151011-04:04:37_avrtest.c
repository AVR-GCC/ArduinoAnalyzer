#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static int32_t g_2 = 0xBEAA32B1L;
static uint8_t g_13[6] = {0UL, 0UL, 0UL, 0xD5L, 0UL, 0xD5L};
static int8_t func_1(void);
static uint32_t func_18(uint32_t p_19, uint32_t p_20, int8_t p_21);
int32_t print0(int32_t k, int count);
int32_t print1(int32_t k, int count);
int32_t print2(int32_t k, int count);
int32_t print3(int32_t k, int count);
int32_t print4(int32_t k, int count);
int32_t print5(int32_t k, int count);
int32_t print6(int32_t k, int count);
int32_t print7(int32_t k, int count);
int print8(int k, int count);
int print9(int k, int count);
static int8_t func_1(void)
{
  int16_t l_11 = 0x85EDL;
  int32_t l_27 = 0x5540FFF0L;
  for (g_2 = print0(-8, 36); g_2 != (-22); --g_2)
  {
    int32_t l_10 = 0xF16EFA42L;
    int32_t l_12 = -10L;
    uint32_t l_22 = 0UL;
    uint32_t l_23 = 1UL;
    l_12 = print1((((int8_t) ((((int16_t) (-((uint32_t) l_10))) << ((int16_t) g_2)) < l_10)) >> ((int8_t) l_11)) <= l_10, 42);
    for (l_10 = print2(5, 43); l_10 >= 0; l_10 -= print3(1, 43))
    {
      int i;
      l_12 = print4(((int16_t) (((uint32_t) func_18((g_13[l_10] == 0x6EC7L, l_22), l_23, l_11)) % ((uint32_t) g_2))) >> ((int16_t) l_11), 46);
      l_12 = print5(((int8_t) (l_27 = print6(func_18((l_12, l_11), g_13[1], g_13[5]) ^ 1UL, 47))) - ((int8_t) 0x57L), 47);
    }

  }

  g_2 = print7((((uint16_t) l_11) << ((uint16_t) g_2)) == l_11, 50);
  return l_11;
}


static uint32_t func_18(uint32_t p_19, uint32_t p_20, int8_t p_21)
{
  uint8_t l_24 = 0xCEL;
  return l_24;
}


int main(int argc, char *argv[])
{
  int i;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print8(1, 74);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  for (i = print9(0, 79); i < 6; i++)
  {
    transparent_crc(g_13[i], "g_13[i]", print_hash_value);
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


int32_t print1(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print2(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print3(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print4(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print5(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print6(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print7(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print8(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print9(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


