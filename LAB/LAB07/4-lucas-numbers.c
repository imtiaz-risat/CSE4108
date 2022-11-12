#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // We store the first and second term
    int l1 = 2, l2 = 1;

    // Print the first two constant terms
    printf("%d %d ", l1, l2);

    // Take a variable to store the next terms
    int x;
    // Run a loop to print the 3rd term upto n-th term
    for (int i = 2; i < n; i++)
    {
        // Store the value of next term in x and print it
        x = l1 + l2;
        printf("%d ", x);

        // Store the value of l2(second last term) into l1
        l1 = l2;
        // Store the value of x(last term) into l2
        l2 = x;
    }

    return 0;
}
