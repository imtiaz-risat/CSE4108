#include <stdio.h>

int main()
{
    int amount;
    printf("Enter value of trade: ");
    scanf("%d", &amount);

    float comm;
    if (amount < 2500)
        comm = 30 + (amount * 1.7 / 100);
    else if (amount <= 6250)
        comm = 56 + (amount * 0.66 / 100);
    else if (amount <= 20000)
        comm = 76 + (amount * 0.34 / 100);
    else if (amount <= 50000)
        comm = 100 + (amount * 0.22 / 100);
    else if (amount <= 500000)
        comm = 155 + (amount * 0.11 / 100);
    else if (amount > 500000)
        comm = 255 + (amount * 0.09 / 100);

    if (comm > 39)
        printf("Commission: $%.2f\n", comm);
    else
        printf("Commission: $39\n");

    return 0;
}
