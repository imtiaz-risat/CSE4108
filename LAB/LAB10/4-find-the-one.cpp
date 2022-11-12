#include <iostream>
using namespace std;

void check_mat(int mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
                cout << "Required Position is " << i + 1 << ',' << j + 1;
        }
    }
}

int main()
{
    int mat[5][5];
    cout << "Values of Matrix: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }

    check_mat(mat);

    return 0;
}
