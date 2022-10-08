#include <stdio.h>

void reverse(int *a, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {1, 3, 6, 7, 3, 8};
    reverse(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

