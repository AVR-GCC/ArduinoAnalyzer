#include "csmith.h"
#include <stdio.h>

    static long __undefined;
struct S1
{
  uint32_t f0;
};
union U2
{
  struct S1 f0;
};
static int32_t g_3 = 0x8BAC04EEL;
static int32_t g_7 = 0x7A9A9718L;
static union U2 g_8 = {{4294967289UL}};
static union U2 func_1(void);
int32_t print0(int32_t k, int count);
int32_t print1(int32_t k, int count);
int print2(int k, int count);
static union U2 func_1(void)
{
  uint32_t l_2 = 4294967293UL;
  int32_t *l_6 = &g_7;
  g_3 = print0(l_2, 44);
  *l_6 = print1(((uint16_t) l_2) + ((uint16_t) 0x7822L), 45);
  return g_8;
}


int main(int argc, char *argv[])
{
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print2(1, 56);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_7, "g_7", print_hash_value);
  transparent_crc(g_8.f0.f0, "g_8.f0.f0", print_hash_value);
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


int print2(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


