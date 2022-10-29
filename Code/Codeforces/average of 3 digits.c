#include <stdio.h>

int main ()
{
    float x,y,z ;
    float a;
    printf("Enter x: ");
    scanf("%f \n", &x);
    printf("Enter y: ");
    scanf("%f \n", &y);
    printf("Enter z: ");
    scanf("%f \n", &z);

    a = ((x+y+z)/3) ;

    printf("Average is %f \n", a);


    return 0;
}

