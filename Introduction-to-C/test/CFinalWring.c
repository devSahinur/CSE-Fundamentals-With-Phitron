
#include <stdio.h>
void change_values(int ar[], int N, int L, int R)
{
    for (int i = 0; i < N; i++)
    {
        if (i >= L && i <= R)
        {
            ar[i] = 0;
        }
    }
}

int main(void)
{
    int ar[5] = {10, 20, 30, 40, 50};
    int L = 1;
    int R = 3;
    change_values(ar, 5, L, R);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}