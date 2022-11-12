#include <stdio.h>

int main()
{
    int item, mm, dd, yyyy;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item Price\tDate\t\tUnit Purchase \n");
    printf("%5.2f      \t%.2d/%.2d/%d\t\t%5d", price, mm, dd, yyyy, item);

    return 0;
}
