#include <stdio.h>

int main(void)
{
    float i, j;

    printf("Enter a number:");
    scanf("%f", &i);

    j = i;

    while (i > 0)
    {
        printf("Enter a number:");
        scanf("%f", &i);

        if(i > j)
            j = i;
    }

    printf("The largest number entered was %.2f\n", j);
    
    return 0;
}