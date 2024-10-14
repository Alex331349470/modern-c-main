#include <stdio.h>

int gcb(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main(void)
{
    int i, j;
    printf("Enter a fraction: ");

    scanf("%d/%d", &i, &j);

    printf("In lowest terms: %d/%d\n", i / gcb(i, j), j / gcb(i, j));

    return 0;
}