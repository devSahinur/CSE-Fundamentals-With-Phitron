#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int N = num;
    int revNum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num = num / 10;
    }
    if (N == revNum)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}