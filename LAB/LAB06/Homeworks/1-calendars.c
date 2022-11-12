#include <stdio.h>

int main()
{
    int days;
    printf("Enter number of days in month: ");
    scanf("%d", &days);
    int x;
    printf("Enter starting day of the week(1=Mon, 7=Sun): ");
    scanf("%d", &x);

    // First we print the days names in the first line
    printf("Mo Tu We Th Fr Sa Su\n");

    // Take a variable to count the position
    int c = 0;
    // Run a loop to print the dates from 1 to days()
    // Take i = 1-x so it can print some spaces while the value of i is less than 0
    // and thus we get the first date "1" right below the exact day
    for (int i = 1 - x; i < days; i++)
    {
        if (i < 0)
        {
            printf("   ");
            c += 1;
        }
        else
        {
            printf("%2d ", i + 1);
            c += 1;
        }
        // Now if the position of printing is 7 or multiple of 7, we get to next line
        if (c % 7 == 0)
            printf("\n");
    }

    return 0;
}