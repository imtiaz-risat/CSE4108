#include <stdio.h>

int main()
{
    char c = 'a';
    printf("The address of char c is %d\n", &c);
    int i = 1;
    printf("The address of int i is %d\n", &i);
    double d = 2.5;
    printf("The address of double d is %d\n", &d);

    char *pc = &c;
    int *pi = &i;
    double *pd = &d;
    printf("The address of char* pc is %d\n", &pc);
    printf("The address of int* pi is %d\n", &pi);
    printf("The address of double* pd is %d\n", &pd);
    printf("The value of char c is %c\n", c);
    printf("The value of int i is %d\n", i);
    printf("The value of double d is %lf\n", d);
    printf("The value of char* c is %d\n", pc);
    printf("The value of int* i is %d\n", pi);
    printf("The value of double* d is %d\n", pd);

    int sc = sizeof(c);
    printf("The size of char is %d\n", sc);
    int si = sizeof(i);
    printf("The size of int is %d\n", si);
    int sd = sizeof(d);
    printf("The size of double is %d\n", sd);
    int spc = sizeof(pc);
    printf("The size of char* is %d\n", spc);
    int spi = sizeof(pi);
    printf("The size of int* is %d\n", spi);
    int spd = sizeof(pd);
    printf("The size of double* is %d\n", spd);

    return 0;
}