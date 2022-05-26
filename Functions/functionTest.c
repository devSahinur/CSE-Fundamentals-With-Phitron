#include <stdio.h>

void printGCD(int x, int y)
{
    while (y > 0)
    {
        int temp = x % y;
        x = y;
        y = temp;
    }
    int gcd = x;
    printf("gcd = %d", gcd);
}

int main()
{
    int m, n;
    scanf("%d %d", &n, &m);

    printGCD(n, m);
}