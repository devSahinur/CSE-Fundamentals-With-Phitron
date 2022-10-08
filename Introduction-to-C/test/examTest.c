
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool check_array(int arr[], int n, int A, int B)
{
    int range = B - A;
    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i]) >= A && abs(arr[i]) <= B)
        {
            int z = abs(arr[i]) - A;
            if (arr[z] > 0)
                arr[z] = arr[z] * -1;
        }
    }

    int count = 0;
    for (int i = 0; i <= range && i < n; i++)
    {
        if (arr[i] > 0)
            return false;
        else
            count++;
    }
    if (count != (range + 1))
        return false;
    return true;
}

int main(void)
{
    int arr[] = {1, 4, 5, 2, 7, 8, 3, 0, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int A = 0, B = 9;
    if (check_array(arr, n, A, B))
        printf("Yes");
    else
        printf("No");
    return 0;
}
