#include <stdio.h>

int main()
{
    int a, b, x, y;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\na=%d b=%d\n", a, b);

    return 0;
}
