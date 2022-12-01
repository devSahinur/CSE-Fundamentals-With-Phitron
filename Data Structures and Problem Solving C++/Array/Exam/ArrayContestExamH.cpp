#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int begin = 0, end = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            begin = i;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Z')
        {
            end = i;
        }
    }
    cout << end - begin + 1 << endl;

    return 0;
}