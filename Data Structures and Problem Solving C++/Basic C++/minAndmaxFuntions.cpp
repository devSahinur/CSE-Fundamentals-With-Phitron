#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 500, c = 250;
    int mn, mx;
    mn = min(a, b);
    mx = max(a, b);
    cout << mn << " " << mx << endl;

    cout << "\n";
    // Three number find min and max number
    int threeMn = max(a, max(b, c));
    cout << threeMn << endl;

    // Array in find min and max number
    int ar[6] = {5, 6, 3, 2, 1, 4}, n = 6;
    int arMn = ar[0];

    for (int i = 1; i < n; i++)
    {
        // if (ar[i] < arMn)
        // {
        //     arMn = ar[i];
        // }
        arMn = min(arMn, ar[i]);
    }

    cout << arMn << endl;

    return 0;
}