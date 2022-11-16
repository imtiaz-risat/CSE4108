#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter up to 10 numbers:\n");
    for (int i = 0; i <= 10; i++)
        scanf("%d", &arr[i]);

    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = arr;

    int pos;
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max <= *ptr1)
        {
            max = *ptr1;
            pos = i + 1;
        }
        ptr1++;
    }

    printf("Max position: %d\n", pos);

    int min = arr[0];
    for (int j = 0; j < 10; j++)
    {
        if (min >= *ptr2)
        {
            min = *ptr2;
            pos = j + 1;
        }
        ptr2++;
    }

    printf("Min Position: %d\n", pos);

    return 0;
}
