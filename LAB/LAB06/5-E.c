#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of of n: ");
    scanf("%d", &n);

    float e = 1.0;
    float d = 1.0;

    for (int i = 1; i <= n; i++)
    {
        d = d * i;
        e = e + (1 / d);
    }

    printf("The final value of e: %f\n", e);

    return 0;
}