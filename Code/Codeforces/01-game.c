#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    int l = strlen(str);

    int move = 0;
    for (int i = 0; i < l - 1; i++)
    {
        if (str[i] != str[i + 1])
            move += 1;
        else
            continue;
    }

    printf("%d", move);

    return 0;
}