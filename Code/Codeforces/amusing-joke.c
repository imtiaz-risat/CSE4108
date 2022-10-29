#include <stdio.h>
#include <string.h>

int main()
{
    char name1[100];
    scanf("%s", name1);
    char name2[100];
    scanf("%s", name2);
    char pile[100];
    scanf("%s", pile);

    int n1 = strlen(name1);
    int n2 = strlen(name2);
    int n3 = strlen(pile);

    if ((n1 + n2) != n3)
    {
        printf("NO");
    }
    else
    {
        char full[n1 + n2 + 1];
        for (int i = 0; i < n1; i++)
        {
            full[i] = name1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            full[n1 + i] = name2[i];
        }

        char t1, t2;
        for (int i = 0; i < n3; i++)
        {
            for (int j = i + 1; j < n3; j++)
            {
                if (pile[i] > pile[j])
                {
                    t1 = pile[i];
                    pile[i] = pile[j];
                    pile[j] = t1;
                }
                if (full[i] > full[j])
                {
                    t1 = full[i];
                    full[i] = full[j];
                    full[j] = t1;
                }
            }
        }

        int X = 1;
        for (int i = 0; i < n3; i++)
        {
            if (full[i] != pile[i])
            {
                X = 0;
                break;
            }
        }

        if (X == 1)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
