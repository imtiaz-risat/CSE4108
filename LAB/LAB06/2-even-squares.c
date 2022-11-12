#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int d;
    for (int i = 1; i <= n; i++)
    {
        d = i * i;
        if (d % 2 == 0)
            printf("%d\n", d);

        if (d >= n)
            break;
    }

    return 0;
}