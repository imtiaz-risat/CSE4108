#include<stdio.h>

int main()
{
    int share; float price, amount;
    printf("Enter number of shares: ");
    scanf("%d",&share);
    printf("Enter price per share: ");
    scanf("%f",&price);

    amount= share*price;

    float comm;
    if(amount<2500){ comm=30+(amount*1.7/100); }
    else if(amount<=6250){ comm=56+(amount*0.66/100); }
    else if(amount<=20000){ comm=76+(amount*0.34/100); }
    else if(amount<=50000){ comm=100+(amount*0.22/100); }
    else if(amount<=500000){ comm=155+(amount*0.11/100); }
    else if(amount>500000){ comm=255+(amount*0.09/100); }

    if(comm>39) { printf("Commission charged by original broker: $%.2f\n",comm); }
    else { printf("Commission charged by original broker: $39\n"); }

    float comm2;

    if(share<2000){ comm2=33+amount*3/100; }
    else { comm2=33+amount*2/100; }

    printf("Commission charged by rival's broker: $%.2f\n",comm2);

    return 0;
}
