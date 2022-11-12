#include <stdio.h>

int main()
{
    double n, sum = 0;

    while (n > 0)
    {
        printf("Enter a number: ");
        scanf("%lf", &n);
        sum += n;
    }

    printf("Sum: %lf", sum);

    return 0;
}