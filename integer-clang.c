#include <stdio.h>
#include <limits.h>
/*
— number of bits for smallest object that is not a bit-field (byte)
CHAR_BIT 8
— minimum value for an object of type signed char
SCHAR_MIN -127//−(2^7−1)
— maximum value for an object of type signed char
SCHAR_MAX +127//2^7−1
— maximum value for an object of type unsigned char
UCHAR_MAX 255//2^8−1
— minimum value for an object of type char
CHAR_MIN see below
— maximum value for an object of type char
CHAR_MAX see below
— maximum number of bytes in a multibyte character, for any supported locale
MB_LEN_MAX 1
— minimum value for an object of type short int
SHRT_MIN -32767//−(2^15−1)
— maximum value for an object of type short int
SHRT_MAX +32767//2^15−1
— maximum value for an object of type unsigned short int
USHRT_MAX 65535//2^16−1
— minimum value for an object of type int
INT_MIN -32767//−(2^15−1)
— maximum value for an object of type int
INT_MAX +32767//2^15−1
— maximum value for an object of type unsigned int
UINT_MAX 65535//2^16−1
— minimum value for an object of type long int
LONG_MIN -2147483647//−(2^31−1)
— maximum value for an object of type long int
LONG_MAX +2147483647//2^31−1
— maximum value for an object of type unsigned long int
ULONG_MAX 4294967295//2^32−1
— minimum value for an object of type long long int
LLONG_MIN -9223372036854775807//−(2^63−1)
— maximum value for an object of type long long int
LLONG_MAX +9223372036854775807//2^63−1
— maximum value for an object of type unsigned long long int
ULLONG_MAX 18446744073709551615//2^64−1
*/

int main(void)
{
  _Bool a;
  
  char b;
  signed char c;
  unsigned char d;

  short int e;
  unsigned short int f;
  int g;
  unsigned int h;

  long int i;
  unsigned long int j;
  long long int k;
  unsigned long long int l;

  /* limits */
  printf("CHAR_BIT: %X\n", CHAR_BIT);
  printf("SCHAR_MIN: %X %d\n", SCHAR_MIN, SCHAR_MIN);
  printf("SCHAR_MAX: %X %d\n", SCHAR_MAX, SCHAR_MAX);
  printf("UCHAR_MAX: %X\n", UCHAR_MAX);
  printf("CHAR_MIN: %X %d\n", CHAR_MIN, CHAR_MIN);
  printf("CHAR_MAX: %X %d\n", CHAR_MAX, CHAR_MAX);
  printf("MB_LEN_MAX: %X\n", MB_LEN_MAX);
  printf("SHRT_MIN: %X %d\n", SHRT_MIN, SHRT_MIN);
  printf("SHRT_MAX: %X %d\n", SHRT_MAX, SHRT_MAX);
  printf("USHRT_MAX: %X\n", USHRT_MAX);
  printf("INT_MIN: %X %d\n", INT_MIN, INT_MIN);
  printf("INT_MAX: %X %d\n", INT_MAX, INT_MAX);
  printf("UINT_MAX: %X\n", UINT_MAX);
  printf("LONG_MIN: %lx %ld\n", LONG_MIN, LONG_MIN);
  printf("LONG_MAX: %lx %ld\n", LONG_MAX, LONG_MAX);
  printf("ULONG_MAX: %lX\n", ULONG_MAX);
  printf("LLONG_MIN: %llX %lld\n", LLONG_MIN, LLONG_MIN);
  printf("LLONG_MAX: %llX %lld\n", LLONG_MAX, LLONG_MAX);
  printf("ULLONG_MAX: %llX\n", ULLONG_MAX);

  /* sizes */
  printf("Unit: Byte\n\n");
  printf("_Bool: %lX\n", sizeof(a));
  printf("char : %lX\n", sizeof(b));
  printf("signed char: %lX\n", sizeof(c));
  printf("unsigned char: %lX\n", sizeof(d));
  printf("short int: %lX\n", sizeof(e));
  printf("unsighend short int: %lX\n", sizeof(f));
  printf("int: %lX\n", sizeof(g));
  printf("unsigned int: %lX\n", sizeof(h));
  printf("long int: %lX\n", sizeof(i));
  printf("unsigned long int: %lX\n", sizeof(j));
  printf("long long int: %lX\n", sizeof(k));
  printf("unsigned long long int: %lX\n", sizeof(l));

  /* literals or constants */
  printf("\nUnit: Byte\n\n");
  printf("0: %d %lX\n", 0, sizeof(0));
  printf("10: %d %lX\n", 10, sizeof(10));
  printf("-10: %d %lX\n", -10, sizeof(-10));
  printf("010: %d %lX\n", 010, sizeof(010));
  printf("-010: %d %lX\n", -010, sizeof(-010));
  printf("0x10: %d %lX\n", 0x10, sizeof(010));
  printf("-0x10: %d %lX\n", -0x10, sizeof(-010));
  printf("\n");
  
  printf("0U: %d %lX\n", 0U, sizeof(0U));
  printf("10U: %d %lX\n", 10U, sizeof(10U));
  printf("010U: %d %lX\n", 010U, sizeof(010U));
  printf("0x10U: %d %lX\n", 0x10U, sizeof(010U));
  printf("\n");

  printf("0L: %ld %lX\n", 0L, sizeof(0L));
  printf("10L: %ld %lX\n", 10L, sizeof(10L));
  printf("-10L: %ld %lX\n", -10L, sizeof(-10L));
  printf("010L: %ld %lX\n", 010L, sizeof(010L));
  printf("-010L: %ld %lX\n", -010L, sizeof(-010L));
  printf("0x10L: %ld %lX\n", 0x10L, sizeof(010L));
  printf("-0x10L: %ld %lX\n", -0x10L, sizeof(-010L));
  printf("\n");

  printf("0UL: %ld %lX\n", 0UL, sizeof(0UL));
  printf("10UL: %ld %lX\n", 10UL, sizeof(10UL));
  printf("010UL: %ld %lX\n", 010UL, sizeof(010UL));
  printf("0x10UL: %ld %lX\n", 0x10UL, sizeof(010UL));
  printf("\n");

  printf("0LL: %lld %lX\n", 0LL, sizeof(0LL));
  printf("10LL: %lld %lX\n", 10LL, sizeof(10LL));
  printf("-10LL: %lld %lX\n", -10LL, sizeof(-10LL));
  printf("010LL: %lld %lX\n", 010LL, sizeof(010LL));
  printf("-010LL: %lld %lX\n", -010LL, sizeof(-010LL));
  printf("0x10LL: %lld %lX\n", 0x10LL, sizeof(010LL));
  printf("-0x10LL: %lld %lX\n", -0x10LL, sizeof(-010LL));
  printf("\n");

  printf("0ULL: %lld %lX\n", 0ULL, sizeof(0ULL));
  printf("10ULL: %lld %lX\n", 10ULL, sizeof(10ULL));
  printf("010ULL: %lld %lX\n", 010ULL, sizeof(010ULL));
  printf("0x10ULL: %lld %lX\n", 0x10ULL, sizeof(010ULL));
  printf("\n");

  return 0;
}
