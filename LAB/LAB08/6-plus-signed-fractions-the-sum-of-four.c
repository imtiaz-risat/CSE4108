#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    float ans;
    char opt;
    printf("Enter the first fraction(a/b): ");
    scanf("%f/%f", &a, &b);
    getchar();
    printf("Enter your operator(+,-,*,/): ");
    scanf("%c", &opt);
    getchar();
    printf("Enter the second fraction(c/d): ");
    scanf("%f/%f", &c, &d);

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