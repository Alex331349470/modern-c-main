#include <stdio.h>

int gcd_two_integer(int i, int j)
{
    while (j != 0)
    {
        int temp = j;
        j = i % j;
        i = temp;
    }

    return i;
}

int main(void)
{
    int i, j;

    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);

    int result = gcd_two_integer(i, j);
    printf("The GCD of %d and %d is %d\n", i, j, result);
    printf("test is %d", 12 % 28);
    return 0;
}