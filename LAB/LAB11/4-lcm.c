#include <stdio.h>

int GCD(int a, int b)
{
    if (b != 0)
        return GCD(b, a % b);
    else
        return a;
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("L.C.M of %d and %d is %d.", a, b, LCM(a, b));
    return 0;
}
