#include <stdio.h>

int main(void) {
  int input;
  printf("Enter the wind blow: ");
  scanf("%d", &input);

  if (input < 1)
    printf("Calm\n");
  else if (input <= 3)
    printf("Light air\n");
  else if (input <= 27)
    printf("Breeze\n");
  else if (input <= 47)
    printf("Gale\n");
  else if (input <= 63)
    printf("Storm\n");
  else
    printf("Hurricane\n");

  return 0;
}
