#include <stdio.h>

int main()
{
    int x, oct = 0, i = 1;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &x);

    while (x != 0)
    {
        oct = oct + (x % 8) * i;
        x = x / 8;
        i = i * 10;
    }

    printf("In octal, your number is: %.5d\n", oct);

    return 0;
}
