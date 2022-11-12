#include <stdio.h>

int main()
{
    int a, b, c, d, up, dw;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);

    dw = b * d;
    up = (a * d) + (b * c);

    printf("The sum is: %d/%d", up, dw);

    return 0;
}
