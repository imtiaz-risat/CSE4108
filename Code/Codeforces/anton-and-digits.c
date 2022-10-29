#include <stdio.h>

int main()
{
    int k2, k3, k5, k6;
    scanf("%d %d %d %d", &k2, &k3, &k5, &k6);

    int l = k6;
    if (k5 < l)
        l = k5;
    if (k2 < l)
        l = k2;
    int x = 256 * l;

    l = k2 - l;
    if (k3 < l)
        l = k3;
    int y = 32 * l;

    int sum = x + y;

    printf("%d", sum);

    return 0;
}