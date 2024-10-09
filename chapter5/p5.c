#include <stdio.h>

int main(void) {
  double income, tax;

  printf("Please enter your income:");
  scanf("%lf", &income);

  if (income < 750)
    printf("Your tax is: $%.2f\n", income * 0.01);
  else if (income < 2250)
    printf("Your tax is: $%.2f\n", 7.50 + (income - 750) * 0.02);
  else if (income < 3750)
    printf("Your tax is: $%.2f\n", 37.50 + (income - 2250) * 0.03);
  else if (income < 5250)
    printf("Your tax is: $%.2f\n", 82.50 + (income - 3750) * 0.04);
  else if (income < 7000)
    printf("Your tax is: $%.2f\n", 142.50 + (income - 5250) * 0.05);
  else
    printf("Your tax is: $%.2f\n", 230.00 + (income - 7000) * 0.06);

  return 0;
}
