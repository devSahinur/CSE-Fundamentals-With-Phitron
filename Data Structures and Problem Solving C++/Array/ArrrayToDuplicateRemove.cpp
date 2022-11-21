#include <bits/stdc++.h>
using namespace std;
// this code problem practice 10.5 8no qu
int main()
{
    short n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int pos = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (pos == arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                index++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[n] << " ";
    }
    cout << index;

    return 0;
}