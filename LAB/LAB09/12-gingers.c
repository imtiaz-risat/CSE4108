#include <stdio.h>
#include <string.h>
int main()
{
    int alpha_val[26];
    char g1[] = "AEILNORSTU";
    char g2[] = "DG";
    char g3[] = "BCMP";
    char g4[] = "FHVWY";
    char g5[] = "K";
    char g6[] = "JX";
    char g7[] = "QZ";

    for (int i = 0; i < strlen(g1); i++)
        alpha_val[g1[i] - 'A'] = 1;
    for (int i = 0; i < strlen(g2); i++)
        alpha_val[g2[i] - 'A'] = 2;
    for (int i = 0; i < strlen(g3); i++)
        alpha_val[g3[i] - 'A'] = 3;
    for (int i = 0; i < strlen(g4); i++)
        alpha_val[g4[i] - 'A'] = 4;
    for (int i = 0; i < strlen(g5); i++)
        alpha_val[g5[i] - 'A'] = 5;
    for (int i = 0; i < strlen(g6); i++)
        alpha_val[g6[i] - 'A'] = 8;
    for (int i = 0; i < strlen(g7); i++)
        alpha_val[g7[i] - 'A'] = 10;

    char word[1000];
    printf("Enter a word: ");
    scanf("%s", word);

    int scrbl_val = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
            scrbl_val += alpha_val[word[i] - 'a'];
        else if (word[i] >= 'A' && word[i] <= 'Z')
            scrbl_val += alpha_val[word[i] - 'A'];
    }

    printf("Scrabble value: %d", scrbl_val);

    return 0;
}
