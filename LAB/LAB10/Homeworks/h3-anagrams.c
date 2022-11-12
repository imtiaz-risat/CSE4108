#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void read(char *str)
{
    printf("Enter your word:");
    scanf("%s", str);
}

bool equal_array(char *one, char *two)
{
    int l1 = strlen(one);
    int l2 = strlen(two);

    if (l1 != l2)
        return 0;
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
                return 0;
                break;
            }
        }
        return 1;
    }
}

int main()
{
    char word1[999];
    char word2[999];
    read(word1);
    read(word2);

    if (equal_array(word1, word2) == 1)
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");

    return 0;
}