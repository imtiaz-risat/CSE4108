#include<stdio.h>

int main ()
{
    int x,a,A,b,c,y;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    a= x/100; A=x%100;
    b= A/10;
    c= A%10;

    y= 100*c+10*b+a;

    printf("The reversal is: %d\n", y);

    return 0;
}

