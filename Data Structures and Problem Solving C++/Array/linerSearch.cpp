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
    int checkValue;
    cout << "Please enter the value you want to search: ";
    cin >> checkValue;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == checkValue)
        {
            cout << "Index No: " << i << " Position : " << i + 1 << endl;
        }
    }

    return 0;
}