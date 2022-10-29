#include <stdio.h>

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int d;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        printf("%d", d);
    }

    return 0;
}