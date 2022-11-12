#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x, y;
    printf("Value of x: ");
    scanf("%d", &x);
    printf("Value of y: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("After swaping\nValue of x: %d\nValue of y:%d", x, y);

    return 0;
}