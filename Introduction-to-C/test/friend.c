#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int arr2[n + 1];
    int m = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (k < n + 1)
        {
            arr2[i] = arr[k];
            k++;
        }
        else
        {
            arr2[i - 1] = arr[m];
            m++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}