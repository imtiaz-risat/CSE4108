#include <stdio.h>
#include <string.h>

int main()
{
    char player[1000000];
    scanf("%s", player);

    // We take the length of the array to run our loop
    int l = strlen(player);

    // Take a variable to how many 0s/1s are consecutive
    int d = 0;
    for (int i = 0; i < l; i++)
    {
        // We check the consecutive digits
        if (player[i] == '1' && player[i + 1] == '1')
            d += 1;
        else if (player[i] == '0' && player[i + 1] == '0')
            d += 1;
        // If the value of d is greater than 6, we break the loop
        else if (d >= 7)
            break;
        // If the consecutive digits [i] & [i+1] are not same
        // return the value of d to ZERO(0)
        else
            d = 0;
    }

    // If d is less than 0; then there's no 7 consecutive same digits
    // So printing NO
    if (d < 7)
        printf("No\n");
    // else print YES
    else
        printf("Yes\n");

    return 0;
}
