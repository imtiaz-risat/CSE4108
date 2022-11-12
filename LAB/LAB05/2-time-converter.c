#include <stdio.h>

int main()
{
    int hh, mm;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hh, &mm);

    if (hh >= 0 && hh < 24)
    {
        if (hh == 0)
            printf("Equivalent 12-hour time: 12:%.2d AM\n", mm);
        else if (hh == 12)
            printf("Equivalent 12-hour time: 12:%.2d PM\n", mm);
        else if (hh > 12 && hh < 24)
            printf("Equivalent 12-hour time: %d:%.2d PM\n", hh - 12, mm);
        else
            printf("Equivalent 12-hour time: %d:%.2d AM\n", hh, mm);
    }
    else
    {
        printf("Wrong time\n");
    }

    return 0;
}
