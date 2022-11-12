#include <bits/stdc++.h>
using namespace std;

void freq(char *str)
{
    int l = strlen(str);
    char ch = 'a';
    while (ch <= 'z')
    {
        int x = 0;
        for (int i = 0; i < l; i++)
        {
            if (str[i] == ch)
                x += 1;
        }
        if (x > 0)
            cout << ch << "=" << x << endl;
        ch++;
    }
}

int main()
{
    char word[99999];
    cout << "Enter a word: ";
    cin >> word;

    freq(word);

    return 0;
}