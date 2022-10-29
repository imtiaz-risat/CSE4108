#include <stdio.h>
#include <string.h>

int main()
{
    char one[9999];
    char two[9999];
    printf("Enter first word: ");
    scanf("%s", one);
    printf("Enter second word: ");
    scanf("%s", two);

    int l1 = strlen(one);
    int l2 = strlen(two);

    int k = 1;

    if (l1 != l2)
    {
        k = 0;
    }
    else
    {
        char tmp;
        for (int i = 0; i < l1; i++)
        {
            for (int j = i + 1; j < l1; j++)
            {
                if (one[i] > one[j])
                {
                    tmp = one[i];
                    one[i] = one[j];
                    one[j] = tmp;
                }
                if (two[i] > two[j])
                {
                    tmp = two[i];
                    two[i] = two[j];
                    two[j] = tmp;
                }
            }
        }

        for (int i = 0; i < l1; i++)
        {
            if (one[i] != two[i])
            {
                k = 0;
                break;
            }
        }
    }

    if (k == 1)
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");

    return 0;
}