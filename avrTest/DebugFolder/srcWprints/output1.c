typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed int int16_t;
typedef unsigned int uint16_t;
typedef signed long int int32_t;
typedef unsigned long int uint32_t;
typedef signed long long int int64_t;
typedef unsigned long long int uint64_t;
static long __undefined;
union U1
{
  volatile int8_t *f0;
};
union U3
{
  int8_t * volatile f0;
  int16_t f1;
};
static volatile int8_t g_10 = -8L;
static volatile int8_t * volatile g_9 = &g_10;
static uint32_t g_12 = 0x2D1A4E66L;
static uint32_t g_14 = 0xE486AEBAL;
static union U1 g_20 = {0};
static uint8_t g_26 = 2UL;
static int16_t g_27 = 0L;
static union U3 g_31 = {0};
static int32_t *g_33 = (void *) 0;
static union U1 *g_37 = &g_20;
static union U1 ** volatile g_36 = &g_37;
static int16_t g_40 = -1L;
static int32_t func_1(void);
static union U1 func_15(uint32_t p_16, int32_t p_17);
static int32_t func_1(void)
{
  int8_t l_2 = 2L;
  int32_t l_28 = -7L;
  int32_t l_29 = 0L;
  union U1 *l_35 = &g_20;
  int32_t *l_38 = (void *) 0;
  lbl_39:
  if (l_2 > 0xCCL)
  {
    uint32_t *l_11 = &g_12;
    int32_t l_13 = 9L;
    if (((int32_t) ((((uint8_t) ((*l_11 = print0(((uint16_t) (g_9 == (&l_2))) << ((uint16_t) 15), 0)) & l_13)) >> ((uint8_t) g_14)) ^ l_2)) - ((int32_t) 0x4292978DL))
    {
      union U1 *l_19 = &g_20;
      int32_t *l_22 = (void *) 0;
      int32_t **l_21 = &l_22;
      *l_21 = print1((*l_19 = func_15(g_12, g_10), &l_13), 1);
    }
    else
    {
      uint8_t *l_25 = &g_26;
      g_27 = print2((((uint16_t) (((*l_25 = l_2) > 0x23L) != l_13)) + ((uint16_t) l_2)) <= l_13, 2);
      return g_12;
    }

    if (l_28)
    {
      return g_12;
    }
    else
    {
      l_29 = print3(0x88101AEDL, 3);
    }

  }
  else
  {
    int32_t *l_30 = &l_29;
    uint32_t *l_32 = (void *) 0;
    *l_30 = print4(l_2, 4);
    *l_30 = print5((g_12 = (g_31, *l_30, 0x947F9F41L)) > 4294967295UL, 5);
  }


  if (g_33 == (&l_29))
  {
    int8_t l_34 = 0x7CL;
    if (l_34)
    {
      *g_36 = print6(l_35, 6);
    }
    else
    {
      return g_27;
    }

  }
  else
  {
    g_33 = print7(l_38, 7);
    if (g_14)
      goto lbl_39;

  }

  return g_40;
}

static union U1 func_15(uint32_t p_16, int32_t p_17)
{
  union U1 l_18 = {0};
  return l_18;
}

int main(int argc, char *argv[])
{
  int print_hash_value = 0;
  if ((argc == 2) && (strcmp(argv[1], "1") == 0))
    print_hash_value = print8(1, 8);

  platform_main_begin();
  crc32_gentab();
  func_1();
  transparent_crc(g_10, "g_10", print_hash_value);
  transparent_crc(g_12, "g_12", print_hash_value);
  transparent_crc(g_14, "g_14", print_hash_value);
  transparent_crc(g_26, "g_26", print_hash_value);
  transparent_crc(g_27, "g_27", print_hash_value);
  transparent_crc(g_40, "g_40", print_hash_value);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
  return 0;
}

uint32_t *print0(uint32_t *l_11 = &g_12, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) l_11, 1);
  debug_puts(str);
  return k;
}

int32_t **print1(int32_t **l_21 = &l_22, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) l_21, 1);
  debug_puts(str);
  return k;
}

int16_t print2(static int16_t g_27 = 0L, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) g_27, 1);
  debug_puts(str);
  return k;
}

int32_t print3(int32_t l_29 = 0L, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) l_29, 1);
  debug_puts(str);
  return k;
}

int32_t *print4(int32_t *l_30 = &l_29, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) l_30, 1);
  debug_puts(str);
  return k;
}

int32_t *print5(int32_t *l_30 = &l_29, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) l_30, 1);
  debug_puts(str);
  return k;
}

union U1 ** volatile print6(static union U1 ** volatile g_36 = &g_37, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) g_36, 1);
  debug_puts(str);
  return k;
}

int32_t *print7(static int32_t *g_33 = (void *) 0, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) g_33, 1);
  debug_puts(str);
  return k;
}

int print8(int print_hash_value = 0, int count)
{
  char str[20];
  memset(str, 0, 20);
  sprinttf(str, "%d$%d\n", (int32_t) k, count);
  platfrom_main_end((int32_t) print_hash_value, 1);
  debug_puts(str);
  return k;
}

