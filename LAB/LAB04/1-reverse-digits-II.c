#include <stdio.h>

int main()
{
    int x, a, b, y;

    printf("Enter a two-digit number: ");
    scanf("%d", &x);

    a = x / 10;
    b = x % 10;
    y = 10 * b + a;

    printf("The reversal is: %d\n", y);

    return 0;
}
