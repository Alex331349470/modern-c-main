#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float commission, stocks, per_value, value, enermy_commission;

  printf("Enter the number of stocks: ");
  scanf("%f", &stocks);

  printf("Enter the price per stock: ");
  scanf("%f", &per_value);

  value = per_value * stocks;

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  if (stocks < 2000.00f)
    enermy_commission = 33.00f + .03f * stocks;
  else
    enermy_commission = 33.00f + .02f * stocks;

  printf("Commission: $%.2f, enermy_commission: $%.2f\n", commission,
         enermy_commission);

  return 0;
}
