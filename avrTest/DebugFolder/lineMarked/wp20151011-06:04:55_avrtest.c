#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static uint16_t g_2 = 0xAE97L;
static uint16_t g_11 = 65534UL;
static uint8_t func_1(void);
uint16_t print0(uint16_t k, int count);
int32_t print1(int32_t k, int count);
int print2(int k, int count);
static uint8_t func_1(void)
{
  int32_t l_9 = 0xEEC54165L;
  int32_t l_10 = 0xA5166941L;
  g_2--;
  g_11 &= print0((((int8_t) (((((uint16_t) (l_9 = print1(l_9, 36))) >> ((uint16_t) 12)) > 0xA0L, l_10))) >> ((int8_t) l_10)) ^ g_2, 36);
  return l_10;
}


int main(int argc, char *argv[])
{
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print2(1, 47);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_2, "g_2", print_hash_value);
  transparent_crc(g_11, "g_11", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}


uint16_t print0(uint16_t k, int count)
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


int print2(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


