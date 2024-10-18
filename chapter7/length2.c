#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef int Bool;
typedef double Dollars;
typedef int Quantity;
typedef long int ptrdiff_t;
typedef unsigned int size_t;
typedef int wchar_t;
typedef float float_t;

int main(void)
{
    int len = 0;
    bool checkout = false;

    Bool flag;

    Dollars cash_in, cash_out;

    Quantity stock;

    printf("Enter a message: ");
    while(getchar() != '\n')
        len++;

    printf("Your message was %d character(s) long.\n", len);

    return 0;
}