#include <stdio.h>

int main()
{
    int h, m, time;
    char f;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &h, &m, &f);

    if (f == 'P' || f == 'p')
        h = h + 12;

    printf("Equivalent 24-hour time: %d:%d", h, m);

    return 0;
}