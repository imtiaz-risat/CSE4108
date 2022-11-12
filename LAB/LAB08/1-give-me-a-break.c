#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    int count = 0;
    for (int i = 2; i <= sqrt(n); i += 2)
    {
        count += 1;
        printf("%d\n", i * i);

        if (count % 24 == 0)
        {
            printf("Press enter to continue...\n");
            while (getchar() != '\n')
            {
                getchar();
            }
        }
    }

    return 0;
}