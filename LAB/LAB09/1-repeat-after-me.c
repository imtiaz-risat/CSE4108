#include <stdio.h>

int main()
{
    long long int num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int cd[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int d;
    while (num > 0)
    {
        d = num % 10;
        num = num / 10;
        cd[d]++;
    }

    printf("Repeated digits(s): ");
    for (int i = 0; i < 10; i++)
    {
        if (cd[i] > 1)
            printf("%d ", i);
    }

    return 0;
}