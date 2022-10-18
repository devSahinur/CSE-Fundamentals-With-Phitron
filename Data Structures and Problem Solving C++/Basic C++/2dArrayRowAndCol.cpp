#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    // int req_row;
    // cin >> req_row;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << a[req_row][i] << " ";
    //     }
    // }

    int req_row;
    cin >> req_row;
    for (int i = 0; i < req_row; i++)
    {
        cout << a[req_row][i] << " ";
    }

    return 0;
}