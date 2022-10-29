#include <stdio.h>

int main()
{

    int mm, dd, yy;
    int a = 12, b = 31, c = 9999;

    while (1)
    {
        printf("Enter a date(mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);

        if (mm == 0 && dd == 0 && yy == 0)
        {
            break;
        }
        else if (yy < c)
        {
            a = mm;
            b = dd;
            c = yy;
        }
        else if (yy == c && mm < a)
        {
            a = mm;
            b = dd;
            c = yy;
        }
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