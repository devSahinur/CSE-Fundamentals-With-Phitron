
#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int sum = 0;
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        int result = mul * 2;
        int output = result - mul;
        if (output > k)
        {
            sum += k;
            mul += k;
        }
        else
        {
            sum = mul * 2;
            mul *= 2;
        }
    }
    printf("%d\n", sum);
}