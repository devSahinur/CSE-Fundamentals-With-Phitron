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
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}