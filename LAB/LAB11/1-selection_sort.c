#include <stdio.h>

int sort(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[n - 1])
        {
            int tmp = nums[n - 1];
            nums[n - 1] = nums[i];
            nums[i] = tmp;
        }
    }
    if (n > 0)
        return sort(nums, n - 1);
    else
        return 0;
}

int main()
{
    int nums[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums[i]);
    }

    int n = sizeof(nums) / sizeof(nums[0]);

    sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}