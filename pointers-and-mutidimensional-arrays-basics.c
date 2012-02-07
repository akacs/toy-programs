#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 4

void print_array(int a[][NUM_COLS]);

int main(void)
{
  int a[NUM_ROWS][NUM_COLS];

  int row, col;
  for (row = 0; row < NUM_ROWS; row++)
    for (col = 0; col < NUM_COLS; col++)
      a[row][col] = 1;

  print_array(a);

  int *p;

  for (p = &a[0][0]; p <= &a[NUM_ROWS-1][NUM_COLS-1]; p++)
    *p = 2;
  
  print_array(a);

  for (p = a[1]; p < a[1] + NUM_COLS; p++)
    *p = 3;

  print_array(a);

  int (*q)[NUM_COLS];

  for (q = &a[0]; q < &a[NUM_ROWS]; q++)
    (*q)[1] = 4;

  print_array(a);

  return 0;
}

void print_array(int a[][NUM_COLS]) {
  int row, col;
  for (row = 0; row < NUM_ROWS; row++) {
    for (col = 0; col < NUM_COLS; col++)
      printf("a[%d][%d] = %d ", row, col, a[row][col]);
    printf("\n");
  }
  printf("\n");
}

