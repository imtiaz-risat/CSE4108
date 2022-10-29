#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int z = 0; z < t; z++)
    {
        int n;
        scanf("%d", &n);

        int r1 = -1, c1, r2, c2;
        for (int i = 0; i < n; i++)
        {
            char star[n + 1];
            scanf("%s", star);

            for (int j = 0; j < n; j++)
            {
                if (star[j] == '*')
                {
                    if (r1 < 0)
                    {
                        r1 = i;
                        c1 = j;
                    }
                    else
                    {
                        r2 = i;
                        c2 = j;
                    }
                }
            }
        }

        if (r1 == r2 && r1 < n - 1)
            r2 = r2 + 1;
        else if (r1 == r2 && r2 >= n - 1)
            r2 = r2 - 1;
        if (c1 == c2 && c1 < n - 1)
            c2 = c2 + 1;
        else if (c1 == c2 && c1 >= n - 1)
            c2 = c2 - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == r1 && (j == c1 || j == c2))
                {
                    printf("*");
                }
                else if (i == r2 && (j == c1 || j == c2))
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    return 0;
}