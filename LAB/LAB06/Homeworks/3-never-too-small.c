#include <stdio.h>

int main()
{
    float k;
    printf("Enter the value of of ε: ");
    scanf("%f", &k);

    float e = 1.0;
    float d = 1.0;
    int i = 1;

    // we run a loop until the fraction is less than k(ε)
    while ((1 / d) >= k)
    {
        d = d * i;
        e = e + (1 / d);
        i += 1;
    }

    printf("The final value of e: %f\n", e);

    return 0;
}