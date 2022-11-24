#include <stdio.h>

int main()
{
    int right, left;
    scanf("%d %d", &left, &right);

    for (int i = left; i <= right; i++)
    {
        int k = 1;
        int num = i;

        while (num > 0)
        {
            int d = num % 10;

            if (d == 0 || (i % d) != 0)
            {
                k = 0;
                break;
            }

            num /= 10;
        }

        if (k == 1)
            printf("%d ", i);
    }

    return 0;
}
