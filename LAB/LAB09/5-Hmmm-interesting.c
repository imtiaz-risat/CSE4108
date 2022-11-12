#include <stdio.h>

int main()
{
    float amount = 100;
    int rate, year;
    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years: ");
    scanf("%d", &year);

    printf("Years\tAmount\n");
    for (int i = 0; i < year * 12; i++)
    {
        amount = amount + (amount * rate / 100);

        if ((i + 1) % 12 == 0)
        {
            printf("%d\t", (i + 1) / 12);
            printf("%.2f\n", amount);
        }
    }

    return 0;
}