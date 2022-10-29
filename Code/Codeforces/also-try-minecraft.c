#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int h[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }

    int a, b, d = 0;
    for (int k = 0; k < m; k++)
    {
        scanf("%d %d", &a, &b);

        if (a < b)
        {
            for (int i = a - 1; i < b - 1; i++)
            {
                if (h[i] > h[i + 1])
                {
                    d += (h[i] - h[i + 1]);
                }
            }
            printf("%d\n", d);
            d = 0;
        }
        else if (a > b)
        {
            for (int i = a - 1; i > b - 1; i--)
            {
                if (h[i] > h[i - 1])
                {
                    d += (h[i] - h[i - 1]);
                }
            }
            printf("%d\n", d);
            d = 0;
        }
    }

    return 0;
}