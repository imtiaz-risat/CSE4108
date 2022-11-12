#include <iostream>
using namespace std;

void pyramid(int *n)
{
    for (int i = 1; i <= *n; i++)
    {

        int d = *n - i;
        for (int j = 0; j < d; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < d; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of line: ";
    cin >> n;

    pyramid(&n);

    return 0;
}