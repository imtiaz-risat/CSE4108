#include <stdio.h>

int power(int n, int x)
{
    if (n == 1)
        return n;
    else if (n % 2 == 0)
    {
        return power(x * x, n / 2);
    }
    else
    {
        return x * power(x * x, n / 2);
    }
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    int ans = power(n, x);

    printf("Answer is %d", ans);

    return 0;
}