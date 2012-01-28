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
  
  return 0;
}
