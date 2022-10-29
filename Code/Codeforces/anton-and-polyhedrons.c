#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int side = 0;
    char shape[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", shape);

        if (shape[0] == 'T')
            side += 4;
        else if (shape[0] == 'C')
            side += 6;
        else if (shape[0] == 'O')
            side += 8;
        else if (shape[0] == 'D')
            side += 12;
        else if (shape[0] == 'I')
            side += 20;
    }

    printf("%d", side);

    return 0;
}