#include <stdio.h>

int main()
{
    int mm, dd, yy;
    // Take three variables to compare (store maximum values to comapre the first input)
    int a = 12, b = 31, c = 9999;

    // We run a infinte loop
    while (1)
    {
        printf("Enter a date(mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);

        // Break the loop when date is 0/0/0
        if (mm == 0 && dd == 0 && yy == 0)
        {
            break;
        }
        // If year is lesser than the prev, store it as earliest date
        else if (yy < c)
        {
            a = mm;
            b = dd;
            c = yy;
        }
        // If years are equal the compare the dates
        else if (yy == c && mm < a)
        {
            a = mm;
            b = dd;
            c = yy;
        }
        // If year & month both are equal compare dates
        else if (yy == c && mm == a & dd < b)
        {
            a = mm;
            b = dd;
            c = yy;
        }
    }

    printf("%d/%d/%d is the earliest date", a, b, c);

    return 0;
}