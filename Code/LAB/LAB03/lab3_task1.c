#include <stdio.h>

int main ()
{
    int mm, dd, yyyy;

    printf("Enetr a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm,&dd,&yyyy);

    printf("Your entered data is %d%.2d%.2d", yyyy,dd,mm);

    return 0;
}
