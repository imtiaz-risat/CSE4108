#include <stdio.h>
#include <string.h>

int main()
{
    char set[5000];
    char letter[5000];

    int m = 1, i = 0;
    while (m = 1)
    {
        scanf("%s", set);
        if (set[0] >= 'a' && set[0] <= 'z')
        {
            letter[i] = set[0];
            i += 1;
        }
        else if (set[1] >= 'a' && set[1] <= 'z')
        {
            letter[i] = set[1];
            i += 1;
        }
        if (set[1] == '}' || set[2] == '}')
        {
            break;
        }
    }

    // printf("%s", letter);

    int n = strlen(letter);

    int X = 0;
    for (int k = 0; k < 26; k++)
    {
        for (int j = 0; j < n; j++)
        {
            if (letter[j] == 65 + k || letter[j] == 97 + k)
            {
                X += 1;
                break;
            }
        }
    }

    printf("%d", X);

    return 0;
}