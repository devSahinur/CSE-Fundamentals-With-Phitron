#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 1;
    cin >> n;
    while (x * 2 <= n)
    {
        x *= 2;
    }
    cout << x;

    return 0;
}