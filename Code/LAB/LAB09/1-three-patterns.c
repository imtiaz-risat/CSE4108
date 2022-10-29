#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // 1st Pattern
    for (int j = 1; j <= n; j++)
    {
        // For each row
        for (int k = 1; k <= j; k++)
        {
            printf("* ");
        }
        // Get to the next line
        printf("\n");
    }

    printf("\n");

    // 2nd Pattern
    for (int j = 1; j <= n; j++)
    {
        // For each row printing the gaps at first
        // There will be (n-j) gaps and +1 more gap in between them
        // so total gaps = 2*(n-j)
        for (int k = 1; k <= 2 * (n - j); k++)
        {
            printf(" ");
        }
        // After the gaps, we print the '*'/s with gaps
        for (int k = 1; k <= j; k++)
        {
            printf("* ");
        }
        // Get to the next line
        printf("\n");
    }

    printf("\n");

    // 3rd Pattern
    for (int j = 1; j <= n; j++)
    {
        // Here there will be half number of gaps at the left side
        // So gaps = n-j
        for (int k = 1; k <= (n - j); k++)
        {
            printf(" ");
        }
        // After the gaps, we print the '*'/s with gaps
        for (int k = 1; k <= j; k++)
        {
            printf("* ");
        }
        // Get to the next line
        printf("\n");
    }

    return 0;
}
