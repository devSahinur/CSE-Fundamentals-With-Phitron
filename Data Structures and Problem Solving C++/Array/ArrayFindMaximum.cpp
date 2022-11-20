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
    int max = 0, min = 0, number, maxIndex, minIndex;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            min = arr[0];
            minIndex = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] >= max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Max: " << max << " , Index: " << maxIndex << endl;
    cout << "Min: " << min << " , Index: " << minIndex << endl;
    return 0;
}