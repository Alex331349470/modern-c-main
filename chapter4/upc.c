#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, total;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3,
        &j4, &j5);

  total = 3 * (i1 + i3 + i5 + j1 + j3 + j5) + (i2 + i4 + j2 + j4) - 1;

  printf("Check digit: %d\n", 9 - (total % 10));

  return 0;
}
