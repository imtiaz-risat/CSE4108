#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    x = a;
    a = b;
    b = x;

    printf("\na=%d b=%d\n", a, b);

    return 0;
}
