#include <stdio.h>
#include <string.h>

int main()
{
    char msg[9999];
    printf("Enter message: ");
    gets(msg);

    int l = strlen(msg);

    for (int i = 0; i < l; i++)
    {
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            msg[i] = msg[i] - 32;
        }
    }

    for (int i = 0; i < l; i++)
    {
        switch (msg[i])
        {
        case 'A':
            msg[i] = '4';
            break;
        case 'B':
            msg[i] = '8';
            break;
        case 'E':
            msg[i] = '3';
            break;
        case 'I':
            msg[i] = '1';
            break;
        case 'O':
            msg[i] = '0';
            break;
        case 'S':
            msg[i] = '5';
            break;
        }
    }

    printf("In B1FF-speak: %s!!!!!!!!!!", msg);

    return 0;
}