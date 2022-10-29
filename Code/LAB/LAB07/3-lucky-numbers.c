#include <stdio.h>
#include <string.h>

int main()
{
    char num[100000];
    scanf("%s", num);

    // Measure the length of the string to run a loop upto that
    int l = strlen(num);

    // We take a variable
    // to check if it remains same after the loop is finished
    // putting a condition for which the variable will change
    int c = 1;
    for (int i = 0; i < l; i++)
    {
        if (num[i] == '4' || num[i] == '7')
            continue;
        // If there is a digit other than 4 or 7, we change the value of c and break the loop
        else
        {
            c = 0;
            break;
        }
    }

    // If the value of c is unchanged, print YES or else print NO
    if (c == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
