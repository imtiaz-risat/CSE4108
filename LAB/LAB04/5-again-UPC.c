#include <stdio.h>

int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, odd_sum, even_sum, total_sum, remainder, check_digit, x;

    printf("Enter the first 11 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);

    odd_sum = d1 + d3 + d5 + d7 + d9 + d11;
    even_sum = d2 + d4 + d6 + d8 + d10;
    total_sum = odd_sum * 3 + even_sum;
    remainder = ((total_sum - 1) % 10);
    check_digit = 9 - remainder;

    printf("Check digit: %d", check_digit);

    return 0;
}
