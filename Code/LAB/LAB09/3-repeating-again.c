#include <stdio.h>

int main()
{
    for (int i = 1; i > 0; i++)
    {
        long long int num;
        printf("Enter a number: ");
        scanf("%lld", &num);

        if (num <= 0)
            break;

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
        printf("\n");
    }
    return 0;
}