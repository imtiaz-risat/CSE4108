#include <stdio.h>
#include <string.h>

int main()
{
    char exp[99999999];
    printf("Enter an expression: ");
    gets(exp);

    int l = strlen(exp);

    int a = 0, b = 0, c = 1;
    char opt;

    for (int i = 0; i < l; i++)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            if (c == 1)
                opt = exp[i];
            c += 1;
        }
        else if (c == 1)
        {
        }
    }
    return 0;
}
