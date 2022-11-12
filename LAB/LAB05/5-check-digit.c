#include <stdio.h>

int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    int even_sum = d2 + d4 + d6 + d8 + d10 + d12;
    int odd_sum = d1 + d3 + d5 + d7 + d9 + d11;
    int total = even_sum * 3 + odd_sum;
    int x = 9 - ((total - 1) % 10);

    if (x == d12)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}
