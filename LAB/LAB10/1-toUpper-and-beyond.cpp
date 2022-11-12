#include <bits/stdc++.h>
using namespace std;

void read(int *num, char *str)
{
    cout << "Enter length: ";
    cin >> *num;
    cout << "Enter Word: ";
    cin >> str;
}

char upper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch -= 32;
    return ch;
}

void print(char *str)
{
    cout << str;
}

int main()
{
    int n;
    char word[100];

    read(&n, word);

    for (int i = 0; i < n; i++)
    {
        word[i] = upper(word[i]);
    }

    print(word);

    return 0;
}