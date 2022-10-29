#include <stdio.h>

int main()
{
    int n, d;
    printf("Enter n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        d = n - i;
        for (int j = 0; j < d; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < ((2 * i) - 1); j++)
        {
            printf("*");
        }
        for (int j = 0; j < d; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    int g, b;
    if (n % 2 != 0)
    {
        b = n;
        g = (((2 * n) - 1) - b) / 2;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < g; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < b; j++)
            {
                printf("*");
            }
            for (int j = 0; j < g; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }

    else if (n % 2 == 0)
    {
        b = n - 1;
        g = (((2 * n) - 1) - b) / 2;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < g; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < b; j++)
            {
                printf("*");
            }
            for (int j = 0; j < g; j++)
            {
                printf(" ");
            }
            if (i < n)
                printf("\n");
        }
    }

    return 0;
}
