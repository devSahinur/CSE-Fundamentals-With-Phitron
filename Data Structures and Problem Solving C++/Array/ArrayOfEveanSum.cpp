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
    int sum;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
    }
    cout << sum;
    return 0;
}