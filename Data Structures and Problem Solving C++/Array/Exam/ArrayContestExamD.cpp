#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        int array[size];

        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        int count = 1, k = 0;
        sort(array, array + size);
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] == array[i + 1])
            {
                count++;
            }
            if (array[i] != array[i + 1])
            {
                count = 1;
            }
            k = max(k, count);
        }
        cout << size - k << endl;
    }

    return 0;
}