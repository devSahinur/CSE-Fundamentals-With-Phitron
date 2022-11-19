#include <stdio.h>
#define PI 3.1416

int main()
{
    int n;
    scanf("%d", &n);
    float ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ar[i]);
    }

    float result[n];
    for (int i = 0; i < n; i++)
    {
        float a = ar[i] * 2;
        float b = a * 2;
        float rectangleArea = a * b;
        float circlesArea = 2 * (PI * (ar[i] * ar[i]));
        float area = rectangleArea - circlesArea;
        result[i] = area;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Case %d: %0.2f\n",i+1, result[i]);
    }

    return 0;
}