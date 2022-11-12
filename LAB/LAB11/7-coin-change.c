#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    if (dollars <= 0)
        return 0;

    else if (dollars >= 20)
    {
        (*twenties)++;
        pay_amount(dollars - 20, twenties, tens, fives, ones);
    }
    else if (dollars >= 10)
    {
        (*tens)++;
        pay_amount(dollars - 10, twenties, tens, fives, ones);
    }
    else if (dollars >= 5)
    {
        (*fives)++;
        pay_amount(dollars - 5, twenties, tens, fives, ones);
    }
    else
    {
        (*ones)++;
        pay_amount(dollars - 1, twenties, tens, fives, ones);
    }
}

int main()
{
    int dollars, twenties = 0, tens = 0, fives = 0, ones = 0;
    printf("Amount($): ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("Bills:\n20$: %d,\n", twenties);
    printf("10$: %d,\n", tens);
    printf("5$: %d,\n", fives);
    printf("1$: %d", ones);

    return 0;
}
