#include <stdio.h>

int main(void) {
  int input;

  printf("Enter a number: ");
  scanf("%d", &input);

  if (input / 1000 != 0)
    printf("The number has 4 digits\n");
  else if (input / 100 != 0)
    printf("The number has 3 digits\n");
  else if (input / 10 != 0)
    printf("The number has 2 digits\n");
  else
    printf("The number has 1 digit\n");

  return 0;
}
