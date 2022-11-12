#include <stdio.h>

int main()
{
    int n, t = 0, s = 0, odd = 0, h = 0;

    int i = 1;
    while (i = 1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            break;
        }
        else
        {
            t += 1;
            s += n;
            if (n % 2 != 0)
                odd += 1;
            if (n > h)
                h = n;
        }
    }
    float avg;
    avg = (s * 1.0) / t;

    printf("The number of inputs is %d\n", t);
    printf("The sum of the input values is %d\n", s);
    printf("The average of the input values is %f\n", avg);
    printf("The number of odd input is %d\n", odd);
    printf("The maximum value entered was %d\n", h);

    return 0;
}