#include <stdio.h>

int main()
{
    int mat[5][5];
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    int sb1 = 0, sb2 = 0, sb3 = 0, sb4 = 0, sb5 = 0;
    int h1 = 0, h2 = 0, h3 = 0, h4 = 0, h5 = 0;
    int l1 = 100, l2 = 100, l3 = 100, l4 = 100, l5 = 100;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter grades of quiz: ");
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);

            if (i == 0)
                s1 += mat[i][j];
            else if (i == 1)
                s2 += mat[i][j];
            else if (i == 2)
                s3 += mat[i][j];
            else if (i == 3)
                s4 += mat[i][j];
            else if (i == 4)
                s5 += mat[i][j];

            if (j == 0)
            {
                sb1 += mat[i][j];
                if (mat[i][j] > h1)
                    h1 = mat[i][j];
                if (mat[i][j] < l1)
                    l1 = mat[i][j];
            }
            else if (j == 1)
            {
                sb2 += mat[i][j];
                if (mat[i][j] > h2)
                    h2 = mat[i][j];
                if (mat[i][j] < l2)
                    l2 = mat[i][j];
            }
            else if (j == 2)
            {
                sb3 += mat[i][j];
                if (mat[i][j] > h3)
                    h3 = mat[i][j];
                if (mat[i][j] < l3)
                    l3 = mat[i][j];
            }
            else if (j == 3)
            {
                sb4 += mat[i][j];
                if (mat[i][j] > h4)
                    h4 = mat[i][j];
                if (mat[i][j] < l4)
                    l4 = mat[i][j];
            }
            else if (j == 4)
            {
                sb5 += mat[i][j];
                if (mat[i][j] > h5)
                    h5 = mat[i][j];
                if (mat[i][j] < l5)
                    l5 = mat[i][j];
            }
        }
    }

    printf("Student's total: %d %d %d %d %d\n", s1, s2, s3, s4, s5);
    printf("Student's Average: %.2f %.2f %.2f %.2f %.2f\n", s1 / 5.0, s2 / 5.0, s3 / 5.0, s4 / 5.0, s5 / 5.0);
    printf("Quiz's Average: %.2f %.2f %.2f %.2f %.2f\n", sb1 / 5.0, sb2 / 5.0, sb3 / 5.0, sb4 / 5.0, sb5 / 5.0);
    printf("Quiz's Highest: %d %d %d %d %d\n", h1, h2, h3, h4, h5);
    printf("Quiz's Highest: %d %d %d %d %d\n", l1, l2, l3, l4, l5);

    return 0;
}