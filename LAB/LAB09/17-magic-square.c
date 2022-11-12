#include <stdio.h>

int rc[99][99];

int main()
{
    int n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int i = 0, j = n / 2, num = 1;
    int pos = n;
    while (num <= n * n)
    {
        rc[i--][j++] = num++;
        pos--;
        if (!pos)
            pos = n, i += 2, j--;

        if (i < 0)
            i = n - 1;
        if (j >= n)
            j = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3.d", rc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
