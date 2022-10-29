#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int n, odd = 0, even = 0;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0)
                even += 1;
            else
                odd += 1;
        }

        //   printf("Odd:%d\nEven:%d", odd, even);

        if (n % 2 == 0 && odd == n)
            printf("NO\n");
        else if (even == n)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}