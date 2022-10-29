#include <stdio.h>
#include <string.h>

int main()
{
    char msg[999999];
    printf("Enter a message to be encrypted: ");
    gets(msg);

    int l = strlen(msg);

    int S;
    printf("Enter shift amount: ");
    scanf("%d", &S);
    S = S % 26;

    for (int i = 0; i < l; i++)
    {
        if (msg[i] >= 65 && msg[i] <= 90)
        {
            if (msg[i] <= (90 - S))
                msg[i] += S;
            else
                msg[i] = S - (90 - msg[i]) + 65 - 1;
        }
        else if (msg[i] >= 97 && msg[i] <= 122)
        {
            if (msg[i] <= (122 - S))
                msg[i] += S;
            else
                msg[i] = S - (122 - msg[i]) + 97 - 1;
        }
    }

    puts(msg);

    return 0;
}