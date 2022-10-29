#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int q = 0; q < t; q++)
    {
        char set[10001];
        scanf("%s", set);

        int l = strlen(set);

        int i = -1, j = -1;
        for (int k = 0; k < l; k++)
        {
            if (set[k] == 'a')
            {
                i = k;
                j = k;
                break;
            }
        }

        int z;
        if (i == -1)
            z = 0;
        else
        {
            z = 1;

            char ch = 'b';
            while (z <= l)
            {
                if (set[i - 1] == ch)
                {
                    ch += 1;
                    z += 1;
                    i -= 1;
                }
                else if (set[j + 1] == ch)
                {
                    ch += 1;
                    z += 1;
                    j += 1;
                }
                else
                    break;
            }
        }

        if (z == l)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}