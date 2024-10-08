#include <stdio.h>

int main(void) {
  int i = 8, j = 5;

  printf("The 1st num is %d\n", 8 % 5);
  printf("The 2nd num is %d\n", -8 % 5);
  printf("The 3rd num is %d\n", 8 % -5);
  printf("The 4th num is %d\n", -8 % -5);

  return 0;
}
