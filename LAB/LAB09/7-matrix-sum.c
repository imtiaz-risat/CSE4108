#include <stdio.h>

int main()
{
    int mat[5][5];
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a row: ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);

            if (i == 0)
                r1 += mat[i][j];
            else if (i == 1)
                r2 += mat[i][j];
            else if (i == 2)
                r3 += mat[i][j];
            else if (i == 3)
                r4 += mat[i][j];
            else if (i == 4)
                r5 += mat[i][j];

            if (j == 0)
                c1 += mat[i][j];
            else if (j == 1)
                c2 += mat[i][j];
            else if (j == 2)
                c3 += mat[i][j];
            else if (j == 3)
                c4 += mat[i][j];
            else if (j == 4)
                c5 += mat[i][j];
        }
    }

    printf("Row totals: %d %d %d %d %d\n", r1, r2, r3, r4, r5);
    printf("Column totals: %d %d %d %d %d\n", c1, c2, c3, c4, c5);

    return 0;
}