#include <stdio.h>

int main()
{
    float loan, rate, pay, cb;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);

    for (int i = 1; i >= 1; i++)
    {
        printf("Enter monthly payment: ");
        scanf("%f", &pay);

        if (pay <= 0.00)
        {
            printf("End of Program!");
            break;
        }

        cb = loan - pay + (loan * rate / 1200);
        printf("Balance remaining after payment %d: $%.2f\n", i, cb);
        loan = cb;
    }

    return 0;
}