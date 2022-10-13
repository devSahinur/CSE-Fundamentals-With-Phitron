#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[6] = {5, 6, 3, 2, 1, 4}, n = 6;
    sort(ar, ar + n);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}