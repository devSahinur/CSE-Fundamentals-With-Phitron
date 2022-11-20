#include <bits/stdc++.h>
using namespace std;

int main()
{
    short n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos, index, flag = 0, find;
    cin >> pos;
    for (int i = 0; i < n; i++)
    {
        if (pos == arr[i])
        {
            find = arr[i];
            index = i;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout << "NOT FOUND";
    }
    else
    {
        cout << "FOUND at index position: " << index << "," << pos;
    }

    return 0;
}