#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#define SIZE 100005
using namespace std;
int a[SIZE];
int n;

void update(int i, int val)
{
    while (i <= n)
    {
        a[i] = a[i] + val;
        i = i + (i & (-i));
    }
}

long long query(int i)
{
    long long ans;
    ans = 0;
    while (i > 0)
    {
        ans = ans + a[i];
        i = i - (i & (-i));
    }
    return ans;
}

int main()
{
    int t, x, y, w, q, ch, choice;
    long long ans;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        cin >> n;
        cin >> q;
        memset(a, 0, sizeof a);
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            update(i, x);
        }

        cout << "Case " << cs << ":" << endl;
        for (int i = 0; i < q; i++)
        {
            cin >> ch;
            switch (ch)
            {
            case 1:
                cin >> x;
                x++;
                ans = query(x) - query(x - 1);
                update(x, -ans);
                cout << ans << endl;
                break;
            case 2:
                cin >> x;
                x++;
                cin >> w;
                update(x, w);
                break;
            case 3:
                cin >> x;
                cin >> y;
                x++;
                y++;
                ans = query(y) - query(x - 1);
                cout << ans << endl;
                break;
            }
        }
    }

    return 0;
}