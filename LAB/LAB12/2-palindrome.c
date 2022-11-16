#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check_pal(char *msg)
{
    int l = strlen(msg);

    // converting every character to lowercase
    int i;
    for (i = 0; i < l; i++)
        msg[i] = tolower(msg[i]);

    // Take two pointers to compare the string
    char *str, *rev;
    str = msg;
    rev = msg;
    str += l - 1;

    // Compare string from left and reight with *str and *rev
    for (i = 0; i < l; i++)
    {
        if (*rev < 'a' || *rev > 'z')
            rev++; // if it is not a letter, skip to the next char
        else if (*str < 'a' || *str > 'z')
            str--; // if it is not a letter, skip to the previous char
        else if (*str == *rev)
        {
            --str;
            rev++; // if both are letter and same then continue to check the next chars
        }
        else
            break; // if the letters are different then break the loop
    }

    // If the loops runs fully then i will be equal to l
    // means the string from left and right are same or simply PALINDROME
    // or else the loop would break and i would be less than l
    if (i == l)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}

int main()
{
    char msg[9999];
    printf("Enter a message: ");
    gets(msg);

    check_pal(msg);

    return 0;
}
