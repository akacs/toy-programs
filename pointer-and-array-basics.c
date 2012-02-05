#include <stdio.h>

#define N 10

void print_array(int *a);
void print_array_addresses(int *a);

int main(void)
{
  int a[N], *p, *q, i;

  for (i = 0; i < N; i++)
    a[i] = i;

  p = &a[0];

  print_array_addresses(a);
  print_array(a);

  *p = 5;

  print_array(a);

  p = &a[2];

  printf ("*p = %d\n", *p);

  print_array(a);

  q = p + 3;

  printf ("*q = %d\n", *q);

  p += 6;

  printf ("*p = %d\n", *p);

  printf ("p = %p; q = %p; p - q = %ld\n", p, q, p - q);
  
  return 0;
}

void print_array(int *a)
{
  int i;
  for (i = 0; i < N; i++) {
    printf("%d ", *a);
    a++;
  }
  printf("\n");
}

void print_array_addresses(int *a)
{
  int i;
  for (i = 0; i < N; i++) {
    printf("%p ", a);
    a++;
  }
  printf("\n");
}
