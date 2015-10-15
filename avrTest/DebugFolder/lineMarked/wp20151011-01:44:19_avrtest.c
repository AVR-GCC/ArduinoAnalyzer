#include "csmith.h"
#include <stdio.h>

    static long __undefined;
static int32_t g_3 = -1L;
static int16_t g_20 = 1L;
static uint32_t g_21 = 0UL;
static int8_t g_24[7][6] = {{0x8FL, 0xE4L, 0xB6L, 1L, 0xD3L, 0x0EL}, {0x46L, 0xE4L, 3L, 1L, 0xB6L, 0xB6L}, {0x46L, 0x3DL, 0x46L, -2L, 0x8FL, 0xB6L}, {1L, 0xEDL, 1L, 0xD3L, 7L, 1L}, {1L, 0xD3L, 0xEDL, 0xE4L, 0x1EL, 0x46L}, {1L, 1L, 0x8FL, 0x46L, 0x0EL, 3L}, {0xD3L, 3L, 0xB6L, 0xEDL, 0xEDL, 0xEDL}};
static uint32_t g_27 = 0xAE45661CL;
static uint32_t func_1(void);
static int32_t func_8(int32_t p_9, uint16_t p_10, uint8_t p_11);
int32_t print0(int32_t k, int count);
int32_t print1(int32_t k, int count);
int32_t print2(int32_t k, int count);
int8_t print3(int8_t k, int count);
int32_t print4(int32_t k, int count);
int16_t print5(int16_t k, int count);
int16_t print6(int16_t k, int count);
int32_t print7(int32_t k, int count);
uint32_t print8(uint32_t k, int count);
int32_t print9(int32_t k, int count);
int print10(int k, int count);
uint32_t print11(uint32_t k, int count);
uint32_t print12(uint32_t k, int count);
int print13(int k, int count);
int print14(int k, int count);
int print15(int k, int count);
static uint32_t func_1(void)
{
  int32_t l_2[7] = {0L, 0L, 0L, 0L, 0L, 0L, 0L};
  uint8_t l_6 = 246UL;
  uint32_t l_7 = 0x13717BE9L;
  int i;
  for (g_3 = print0(0, 41); g_3 < 7; g_3 += print1(1, 41))
  {
    l_2[g_3] = print2(0x51D69F42L, 43);
  }

  if ((((uint8_t) ((l_6 || g_3) | (-3L))) * ((uint8_t) l_7)) > g_3)
  {
    g_24[5][1] = print3(func_8(g_3 = print4(l_7, 47), l_6, l_6), 47);
  }
  else
  {
    for (g_20 = print5(0, 51); g_20 != 13; g_20 += print6(5, 51))
    {
      g_3 = print7(0xCEA2FF3EL, 53);
    }

    g_27 ^= print8(g_3 = print9(g_24[5][1] >= g_24[5][1], 55), 55);
  }

  return g_24[5][1];
}


static int32_t func_8(int32_t p_9, uint16_t p_10, uint8_t p_11)
{
  uint32_t l_17[2];
  int32_t l_18 = 0L;
  int32_t l_19 = 0xE3F9150FL;
  int i;
  for (i = print10(0, 72); i < 2; i++)
    l_17[i] = print11(0xAA8E55A4L, 73);

  l_17[0] = print12(-((uint16_t) ((((int16_t) (((uint16_t) 65531UL) << ((uint16_t) g_3))) << ((int16_t) 12), g_3))), 74);
  g_21--;
  return p_10;
}


int main(int argc, char *argv[])
{
  int i;
  int j;
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print13(1, 87);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_3, "g_3", print_hash_value);
  transparent_crc(g_20, "g_20", print_hash_value);
  transparent_crc(g_21, "g_21", print_hash_value);
  for (i = print14(0, 94); i < 7; i++)
  {
    for (j = print15(0, 96); j < 6; j++)
    {
      transparent_crc(g_24[i][j], "g_24[i][j]", print_hash_value);
      if (print_hash_value)
        printf("index = [%d][%d]\n", i, j);

    }

  }

  transparent_crc(g_27, "g_27", print_hash_value);
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


int32_t print2(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int8_t print3(int8_t k, int count)
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


int16_t print5(int16_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int16_t print6(int16_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print7(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint32_t print8(uint32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int32_t print9(int32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print10(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint32_t print11(uint32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


uint32_t print12(uint32_t k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print13(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print14(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


int print15(int k, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprintf(str, "%lu$%lu\n", (int32_t) k, (int32_t) count);
  platform_main_end((int32_t) k, 1);
  debug_puts(str);
  return k;
}


