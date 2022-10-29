#include <stdio.h>

int main()
{
    int n, sum = 0;

    while (n > 0)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum += n;
    }

    printf("Sum: %d", sum);

    return 0;
}