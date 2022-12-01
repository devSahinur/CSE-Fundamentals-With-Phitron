#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int index;
        for (int i = 0; i < n; i++)
        {
            if (arr[0] == arr[i])
            {
                index = i;
            }
        }
        int result = n - index - 1;
        cout << result << endl;
    }

    return 0;
}