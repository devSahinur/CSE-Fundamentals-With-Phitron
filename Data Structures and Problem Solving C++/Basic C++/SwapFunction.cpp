#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[6] = {5, 6, 3, 2, 1, 4}, n = 6;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    // or
    printf("\n");

    int a = 10, b = 100;
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}