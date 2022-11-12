#include <stdio.h>
int main()
{
    float pi = 3.1416;
    int r;
    printf("Enter radius: ");
    scanf("%d", &r);

    float area = 4.0 / 3.0 * pi * r * r * r;

    printf("%f", area);

    return 0;
}
