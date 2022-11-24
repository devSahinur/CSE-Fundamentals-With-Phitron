#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    short size;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Before sort: ";
    printArray(array, size);
    cout << endl;

    // Insertion Sort Implementation
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    cout << "After sort: ";
    printArray(array, size);
    cout << endl;

    return 0;
}