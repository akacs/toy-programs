#include <stdio.h>

int main(void)
{
  float yearly_rate, monthly_rate, payment, balance;
  
  printf("Enter amount of loan: ");
  scanf("%f", &balance);
  printf("Enter interest rate: ");
  scanf("%f", &yearly_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  monthly_rate = yearly_rate / (12.0 * 100.0);

  balance = balance - payment;
  printf("Balance remaining after first payment: %.2f\n", balance);
  
  balance = balance * (1.0 + monthly_rate) - payment;
  printf("Balance remaining after second payment: %.2f\n", balance);
  
  balance = balance * (1.0 + monthly_rate) - payment;
  printf("Balance remaining after third payment: %.2f\n", balance);
  
  return 0;
}
