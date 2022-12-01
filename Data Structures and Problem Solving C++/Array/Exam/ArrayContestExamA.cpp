#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, count = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] >= 10)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}