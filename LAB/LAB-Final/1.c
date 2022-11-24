#include <stdio.h>
#include <string.h>

int main()
{
    char str[99999];
    scanf("%s", str);

    int len = strlen(str);

    int ind[len];
    for (int i = 0; i < len; i++)
        scanf("%d", &ind[i]);

    char ans[len];

    for (int i = 0; i < len; i++)
    {
        ans[ind[i]] = str[i];
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", ans[i]);
    }

    return 0;
}
