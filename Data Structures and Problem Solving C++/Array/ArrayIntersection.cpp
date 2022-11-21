#include <bits/stdc++.h>
using namespace std;

int main()
{
    short n, m;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> m;
    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int result[n];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                result[index] = B[j];
                index++;
            }
        }
    }
    if (index == 0)
    {
        cout << "Empty set";
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            cout << result[i] << " ";
        }
    }

    return 0;
}