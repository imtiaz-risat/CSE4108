#include<stdio.h>

int main()
{
    int amount;
    printf("Enter Income: ");
    scanf("%d",&amount);

    float tax;
    if(amount<750){ tax=(amount*1/100); }
    else if(amount<=2250){ tax=7.50+(amount*2/100); }
    else if(amount<=3750){ tax=37.50+(amount*3/100); }
    else if(amount<=5250){ tax=82.50+(amount*4/100); }
    else if(amount<=7000){ tax=142.50+(amount*5/100); }
    else if(amount>7000){ tax=230.00+(amount*6/100); }

    printf("tax: $%.2f\n",tax);

    return 0;
}

