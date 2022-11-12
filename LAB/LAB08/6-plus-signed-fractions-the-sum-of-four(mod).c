#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    float ans;
    char opt;
    printf("Calculate: ");
    scanf("%f/%f %c %f/%f", &a, &b, &opt, &c, &d);

    if (opt == '+')
        ans = ((a * d) + (b * c)) / (b * d);
    else if (opt == '-')
        ans = ((a * d) - (b * c)) / (b * d);
    else if (opt == '*')
        ans = (a * c) / (b * d);
    else if (opt == '/')
        ans = (a * d) / (b * c);

    printf("Result: %f", ans);

    return 0;
}