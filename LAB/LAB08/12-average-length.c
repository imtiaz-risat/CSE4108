#include <stdio.h>
#include <string.h>

int main()
{
    char str[99999];
    printf("Enter a sentence: ");
    gets(str);

    int l = strlen(str);
    int word = 1;
    for (int i = 0; i < l; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            word += 1;
    }

    float gap = word - 1;

    float avg_len = (l - gap) / word;

    printf("%g", avg_len);

    return 0;
}
