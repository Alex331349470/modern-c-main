#include <stdio.h>

int main(void) {
  int n, reverse = 0;
  printf("Enter a number: ");

  scanf("%d", &n);
  do {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;
  } while (n != 0);

  printf("The reversal is: %d\n", reverse);

  return 0;
}
