#include <stdio.h>

float tax_calculate(int income)
{
    float tax;
    if (income <= 750)
    {
        tax = income * .01;
    }
    else if (income <= 2250 && income > 750)
    {
        tax = (income - 750) * .02 + 7.5;
    }
    else if (income <= 3750 && income > 2250)
    {
        tax = (income - 2250) * .03 + 37.5;
    }
    else if (income <= 5250 && income > 3750)
    {
        tax = (income - 3750) * .04 + 82;
    }
    else if (income <= 7000 && income > 5250)
    {
        tax = (income - 5250) * .05 + 142;
    }
    else if (income > 7000)
    {
        tax = (income - 7000) * .06 + 230;
    }

    return tax;
}

int main()
{
    int income;
    printf("Enter the amount of taxable income: ");
    scanf("%d", &income);
    printf("Due tax: %.2f", tax_calculate(income));

    return 0;
}
