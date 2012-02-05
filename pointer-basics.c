#include <stdio.h>

int main(void)
{
  int a;
  int *pa;

  a = 0;
  pa = &a;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\n", a, &a, pa, *pa);

  *pa = 1;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\n", a, &a, pa, *pa);

  int b = 2, *pb;

  pb = pa;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\nb = %d; &b = %p; pb = %p; *pb = %d\n", a, &a, pa, *pa, b, &b, pb, *pb);

  pb = &b;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\nb = %d; &b = %p; pb = %p; *pb = %d\n", a, &a, pa, *pa, b, &b, pb, *pb);

  *pb = *pa;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\nb = %d; &b = %p; pb = %p; *pb = %d\n", a, &a, pa, *pa, b, &b, pb, *pb);

  return 0;
}
