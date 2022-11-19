#include <bits/stdc++.h>
using namespace std;

void PrintArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[50];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "Given Array : ";
    PrintArray(array, size);

    int pos, value;
    // cout << "Postion of the Insertion: ";
    cout << "Postion of the Deletion: ";
    cin >> pos;
    // cout<<endl << "Value of the Insertion: ";
    // cin >> value;
    if (pos < 0 || pos > size - 1) // Insertion --> size,Deletion --> size-1
    {
        cout << "Invalid Index";
    }
    else
    {
        // INSERTION 1
        // for (int i = size-1; i >= pos; i--)
        // {
        //     array[i + 1] = array[i];
        // }
        // array[pos] = value;
        // INSERTION 2
        // array[size]=array[pos];
        // array[pos]=value;

        // DELETION
        if (pos == size - 1)
            size--;
        else
        {
            for (int i = pos + 1; i < size; i++)
            {
                array[i - 1] = array[i];
            }
            size--;
        }
    }

    // cout << "Array After the Insertion : ";
    // PrintArray(array, size + 1);

    cout << endl
         << "Array after the Deletion: ";
    PrintArray(array, size);

    return 0;
}