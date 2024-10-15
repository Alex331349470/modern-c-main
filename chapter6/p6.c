#include <stdio.h>

int main(void) {
  int n;
  int i = 0;

  printf("Enter a number:");
  scanf("%d", &n);

  while (i * i <= n) {

    if (i % 2 == 0 && i > 0)
      printf("%d\n", i * i);

    i++;
  }

  return 0;
}
