#include <stdio.h>

int main()
{
    int size = sizeof(int);
    printf("Size of int: %d\n", size);

    size = sizeof(short);
    printf("Size of short: %d\n", size);

    size = sizeof(long);
    printf("Size of long: %d\n", size);

    size = sizeof(long long);
    printf("Size of long long: %d\n", size);

    size = sizeof(float);
    printf("Size of float: %d\n", size);

    size = sizeof(double);
    printf("Size of double: %d\n", size);

    size = sizeof(long double);
    printf("Size of long double: %d\n", size);

    return 0;
}