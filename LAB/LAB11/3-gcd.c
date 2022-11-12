#include <stdio.h>

int GCD(int a, int b)
{
    if (b > a)
        return GCD(b, a);
    else if (b != 0)
        return GCD(b, a % b);
    else
        return a;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d.", a, b, GCD(a, b));
    return 0;
}
