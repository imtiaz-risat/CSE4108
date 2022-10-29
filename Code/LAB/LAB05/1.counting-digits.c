#include<stdio.h>

int check_digit(int number);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("The number %d has %d digits\n", n, check_digit(n) );

 return 0;
}

int check_digit(int number){
    int d=1;
    while(number!=0){
        number=number/10;
        if(number!=0) { d+=1; }
    }
    return d;
}
