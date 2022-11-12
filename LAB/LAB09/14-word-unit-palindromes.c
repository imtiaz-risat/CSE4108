#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];
    printf("Enter a sentence: ");
    scanf("%[^\n]", s);

    int len = strlen(s), wrdcount = 1;
    char wrds[80][80];

    int ith_wrd = 0, ith_char = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            wrds[ith_wrd][ith_char] = '\0';
            wrdcount++;
            ith_char = 0, ith_wrd++;
        }
        else
            wrds[ith_wrd][ith_char++] = s[i];
    }

    int last = s[len - 1], fullstop = 0;

    if ((last >= 'A' && last <= 'Z') || (last >= 'a' && last <= 'z'))
        fullstop = 1;
    else
        wrds[ith_wrd][ith_char - 1] = '\0';

    printf("Reversal of sentence: ");

    for (int i = wrdcount - 1; i >= 0; i--)
    {
        if (!i && fullstop)
            printf("%s.", wrds[i]);
        else if (!i)
            printf("%s%c", wrds[i], last);
        else
            printf("%s ", wrds[i]);
    }

    return 0;
}
