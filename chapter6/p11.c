#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    double e = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        e += 1.0 / tgamma(i + 1);
    }

    printf("The value of e is: %.10lf\n", e);

    return 0;
}