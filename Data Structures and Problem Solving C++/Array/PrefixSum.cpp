#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 8, 1, 2, 5};
    int pre[5];
    pre[0] = arr[0];
    for (int i = 0; i < 5; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}