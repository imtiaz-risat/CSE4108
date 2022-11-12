#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    gcd(b, a % b);
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    if (numerator == 0)
    {
        *reduced_numerator = 0;
        *reduced_denominator = 1;
        return;
    }
    int factor = gcd(numerator, denominator);
    *reduced_numerator = numerator / factor;
    *reduced_denominator = denominator / factor;
}

int main()
{
    int a, b, ra, rb;
    scanf("%d/%d", &a, &b);

    reduce(a, b, &ra, &rb);

    printf("%d/%d = %d/%d", a, b, ra, rb);

    return 0;
}
