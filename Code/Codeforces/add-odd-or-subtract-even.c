#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b, d, s;
        scanf("%d %d", &a, &b);

        d = b - a;

        if (d == 0)
            s = 0;
        else if (d > 0 && d % 2 != 0)
            s = 1;
        else if (d > 0 && d % 2 == 0)
            s = 2;
        else if (d < 0 && d % 2 != 0)
            s = 2;
        else if (d < 0 && d % 2 == 0)
            s = 1;

        printf("%d\n", s);
    }
    return 0;
}