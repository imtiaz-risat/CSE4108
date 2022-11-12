#include <stdio.h>
#include <math.h>

int main()
{
    long long int x;
    printf("Enter x: ");
    scanf("%d", &x);

    long double y = 1, avg = 1;

    do
    {
        y = avg;
        double xdivy = x / y;
        double avg = (y + xdivy) / 2;
    } while (fabs(y - avg) <= (0.01 * y));

    printf("Square root: %lf", avg);

    return 0;
}