#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    char c;
    cout << "Do You want to Search: (Y/N) ";
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int checkValue;
        cout << "Please enter the value you want to search: ";
        cin >> checkValue;
        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (array[i] == checkValue)
            {
                flag = 1;
                cout << "Index No: " << i << " Position : " << i + 1 << endl;
            }
        }
        if (flag == 0)
            cout << "Not Found" << endl;
        cout << "Do You want too Continue Searching: (Y/N) ";
        cin >> c;
    }

    return 0;
}