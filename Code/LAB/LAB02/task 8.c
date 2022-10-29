#include<stdio.h>
int main ()
{
    double currBalance,prevBalance,pay,rate,monthlyRate,currBalance2,currBalance3;
    printf("Enter the amount of loan: ");
    scanf("%lf",&prevBalance);
    printf("Enter interest rate: ");
    scanf("%lf",&rate);
    printf("Enter monthly payment: ");
    scanf("%lf",&pay);
    monthlyRate=(rate/100)/12;
    currBalance=prevBalance-pay+(prevBalance*monthlyRate);
    printf("Balance after first payment: %.2lf\n", currBalance);
    currBalance2=currBalance-pay+(prevBalance*monthlyRate);
    printf("Balance after second payment: %.2lf\n", currBalance2);
    currBalance3=currBalance2-pay+(prevBalance*monthlyRate);
    printf("Balance after second payment: %.2lf\n", currBalance3);

    return 0;
}
