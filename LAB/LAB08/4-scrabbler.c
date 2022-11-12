#include <stdio.h>
#include <string.h>

int main()
{
    char word[999999];
    printf("Enter a word: ");
    scanf("%s", word);

    int l = strlen(word);
    int point = 0;
    for (int i = 0; i < l; i++)
    {
        switch (word[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'l':
        case 'n':
        case 'o':
        case 'r':
        case 's':
        case 't':
        case 'u':
            point += 1;
            break;

        case 'D':
        case 'G':
        case 'd':
        case 'g':
            point += 2;
            break;

        case 'B':
        case 'C':
        case 'M':
        case 'P':
        case 'b':
        case 'c':
        case 'm':
        case 'p':
            point += 3;
            break;

        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
        case 'f':
        case 'h':
        case 'v':
        case 'w':
        case 'y':
            point += 4;
            break;

        case 'K':
        case 'k':
            point += 5;
            break;

        case 'J':
        case 'X':
        case 'j':
        case 'x':
            point += 8;
            break;

        case 'Q':
        case 'Z':
        case 'q':
        case 'z':
            point += 10;
            break;
        }
    }

    printf("Scrabble value: %d", point);

    return 0;
}