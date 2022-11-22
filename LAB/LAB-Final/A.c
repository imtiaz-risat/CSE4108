#include <stdio.h>
#include <string.h>

int main()
{
    char s[999];
    printf("Enter the string: ");
    scanf("%s", &s);

    int len = strlen(s);

    int widths[len];
    printf("Enter the widths: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &widths[i]);
    }

    int res_1 = 1, res_2 = 0, pos = 0;
    for (int i = 0; i < len; i++)
    {
        pos += widths[i];
        if (pos >= 100)
        {
            res_1++;
            if (pos > 100)
            {
                pos -= widths[i];
                i--;
            }
            pos = 0;
        }
        res_2 = pos;
    }

    printf("[%d,%d]\n", res_1, res_2);

    return 0;
}
