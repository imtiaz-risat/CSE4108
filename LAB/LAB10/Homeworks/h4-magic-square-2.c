#include <stdio.h>

void create_magic_square(int n, int magic_square[99][99])
{
    int i = 0, j = n / 2, cur_num = 1;
    int repos = n;
    while (cur_num <= n * n)
    {
        magic_square[i--][j++] = cur_num++;
        repos--;
        if (!repos)
            repos = n, i += 2, j--;

        if (i < 0)
            i = n - 1;
        if (j >= n)
            j = 0;
    }
}

void print_magic_square(int n, int magic_square[99][99])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", magic_square[i][j]);
        printf("\n");
    }
}

int main()
{
    int grid[99][99];
    int n;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    create_magic_square(n, grid);
    print_magic_square(n, grid);

    return 0;
}
