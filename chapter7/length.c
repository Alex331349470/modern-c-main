#include <stdio.h>

int main(void) {
  char ch;

  int len = 0;

  printf("Enter a message: ");
  ch = getchar();

  while (ch != '\n') {
    len++;
    ch = getchar();
  }

  printf("Your message was %d character(s) long.\n", len);
  printf("testing the git\n");

  return 0;
}
