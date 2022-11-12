#include <stdio.h>
int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    long long int ans = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;

    printf("Answer is: %d", ans);

    return 0;
}
