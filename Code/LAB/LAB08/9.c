#include <stdio.h>
#include <string.h>

int main()
{
    char str[99999];
    printf("Enter a sentence: ");
    gets(str);

    int l = strlen(str);

    int vowels = 0;
    for (int i = 0; i < l; i++)
    {
        switch (str[i])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            vowels += 1;
            break;
        }
    }

    printf("Your sentence contains %d vowles.", vowels);

    return 0;
}
