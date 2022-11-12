#include<stdio.h>
int main ()
{
    double x;
    printf ("Enter the value of x: ");
    scanf ("%lf", &x);
    x= ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf ("The value of the polynomial: %lf\n",x);

    return 0;
}
