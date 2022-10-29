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

    printf("Digit:      0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurences: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", cd[i]);
    }

    return 0;
}