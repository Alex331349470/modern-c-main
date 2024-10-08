#include <stdio.h>

int main(void) {
  int i, oct;
  printf("Enter a number between 0 and 32767: \n");

  scanf("%d", &i);

  printf("In octal, yout number is: %o.\n", i);

  return 0;
}
