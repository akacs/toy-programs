#include <stdio.h>

int main(void)
{
  int a[0];
  int b[1];
  int c[2];
  int d[3][5];

  printf("size of a[0]: %lu\n", sizeof(a));
  printf("size of b[1]: %lu\n", sizeof(b));
  printf("size of c[2]: %lu\n", sizeof(c));
  printf("size of d[3][5]: %lu\n", sizeof(d));
  
  return 0;
}
