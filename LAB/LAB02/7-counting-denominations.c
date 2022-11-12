#include <stdio.h>
int main()
{
    int bill;
    printf("Enter a dollar amount: ");
    scanf("%d", &bill);

    int twenty = 0, ten = 0, five = 0, one = 0;
    while (bill > 0)
    {
        if (bill >= 20)
        {
            bill -= 20;
            twenty++;
        }
        else if (bill >= 10)
        {
            bill -= 10;
            ten++;
        }
        else if (bill >= 5)
        {
            bill -= 5;
            five++;
        }
        else if (bill >= 1)
        {
            bill -= 1;
            one++;
        }
    }

    printf("$20 bills: %d\n$10bills: %d\n$5 bills: %d\n$1 bills: %d", twenty, ten, five, one);

    return 0;
}
