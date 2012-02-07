#include <stdio.h>

void print_string(char *a);

int main(void)
{
  char *p, *q;
  p = "abc";

  printf("%s\n", p);

  for (q = p; q < p + 4; q++)
    printf("%d ", *q);
  printf("\n");

  char date1[8] = {'J', 'u', 'n', 'e', ' ', '1', '4', '\0'};
  char date2[8] = "June 14";
  char date3[9] = "June 14";
  char date4[7] = "June 14";
  char date5[] = "June 14";

  print_string(date1);
  print_string(date2);
  print_string(date3);
  print_string(date4);
  print_string(date5);

  return 0;
}

void print_string(char *a) {
  char *p;
  for (p = a; p < a + 10; p++)
    printf("%d ", *p);
  printf("\n");
}

