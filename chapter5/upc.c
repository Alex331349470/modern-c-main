#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, total, check_digit;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1,
        &j2, &j3, &j4, &j5);

  printf("Enter the check_digit: ");
  scanf("%d", &check_digit);

  total = 3 * (i1 + i3 + i5 + j1 + j3 + j5) + (i2 + i4 + j2 + j4) - 1;

  if (check_digit == 9 - ((total - 1) % 10))
    printf("VALID\n");
  else
    printf("INVALID\n");

  return 0;
}
