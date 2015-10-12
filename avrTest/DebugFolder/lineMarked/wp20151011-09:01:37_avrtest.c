#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static int32_t g_6 = 0xD7953644L;
static int32_t func_1(void);
int32_t print0(int32_t k, int count);
int print1(int k, int count);
static int32_t func_1(void)
{
  uint32_t l_7 = 0xD94543BEL;
  g_6 = print0(((uint8_t) (((int8_t) g_6) << ((int8_t) g_6))) << ((uint8_t) 2), 33);
  return l_7;
}


int main(int argc, char *argv[])
{
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print1(1, 44);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_6, "g_6", print_hash_value);
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


int print1(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%d$%d\n", (int32_t) k, count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


