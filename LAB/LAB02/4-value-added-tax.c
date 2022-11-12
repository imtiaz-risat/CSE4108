#include<stdio.h>
int main ()
{
    double amount, total;
    printf("Enter amount: ");
    scanf("%lf", &amount);
    total=amount*1.05;
    printf("With VAT added: %lf\n", total);

    return 0;
}
