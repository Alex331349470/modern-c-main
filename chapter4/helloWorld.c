#include <stdio.h>

int main(void) {
  int num, yank, ook;

  printf("Enter the ook integer:");

  scanf("%d", &ook);

  printf("Enter the num integer:");

  scanf("%d", &num);

  printf("The number you entered is %d %d\n", num, ook);

  yank = num + ook;

  printf("The sum of the yank is %d\n", yank);

  return 0;
}
