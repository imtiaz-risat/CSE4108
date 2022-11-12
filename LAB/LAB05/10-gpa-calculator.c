#include <stdio.h>

int main()
{
        int n;

        printf("Enter numerical grade: ");
        scanf("%d", &n);

        if (n >= 0 && n <= 100)
        {
                switch (n / 10)
                {
                case 10:
                        printf("Letter grade: A\n");
                        break;
                case 9:
                        printf("Letter grade: A\n");
                        break;
                case 8:
                        printf("Letter grade: B\n");
                        break;
                case 7:
                        printf("Letter grade: C\n");
                        break;
                case 6:
                        printf("Letter grade: D\n");
                        break;
                default:
                        printf("Letter grade: F\n");
                }
        }
        else
                printf("Wrong input!\n");

        return 0;
}
