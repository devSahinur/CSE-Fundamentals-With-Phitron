#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[10000];
    cin >> str;
    bool found = false;
    int counter[26] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        counter[ch - 'a']++;
    }

    int mn = 26;
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] == 0)
        {
            if (mn > i)
            {
                mn = i;
                found = true;
            }
        }
    }

    if (found == false)
    {
        cout << "None";
    }
    else
    {
        char ch = mn + 'a';
        cout << ch;
    }

    return 0;
}