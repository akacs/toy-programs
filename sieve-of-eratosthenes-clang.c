#include <stdio.h>


void sieve_of_eratosthenes_original(int n)
{
  int i;
  int p;
  int prime[n + 1]; /* Meaning of values: -1: Not yet tested, 0: Not prime, 1: prime */

  if (n < 2) {
    printf("No prime found.\n");
    return;
  }

  /* STEP1: initialize the array */
  prime[0] = 0;
  prime[1] = 0;

  for (i = 2; i <= n; i++) {
    prime[i] = -1;
  }

  /* STEP2: initialize p */
  p = 2;

 STEP3:
  /* STEP3: mark */
  prime[p] = 1;
  for (i = p * 2; i <= n; i = i + p) {
    prime[i] = 0;
  }

  /* STEP4: iterate or terminate */
  for (i = 2; i <= n; i++) {
    if (prime[i] == -1) {
      p = i;
      goto STEP3;
    }
  }
  
  /* show the result */
  for (i = 2; i <= n + 1; i++) {
    if (prime[i] == 1) {
      printf("%d\n", i);
    }
  }
}

int main(void)
{
  int n = 1000;

  sieve_of_eratosthenes_original(n);
  
  return 0;
}
