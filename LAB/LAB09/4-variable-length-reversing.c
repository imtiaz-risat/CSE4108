#include <stdio.h>

int main()
{
    int a[100] = {0};
    printf("Size of array: %d", (sizeof(a)) / (sizeof(a[0])));

    return 0;
}
