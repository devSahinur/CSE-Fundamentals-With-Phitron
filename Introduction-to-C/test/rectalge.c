#include <stdio.h>
#define PI 3.1416
int main()
{
    short t, i = 1;
    float r, greenArea;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%f", &r);
        greenArea = (8 - 2 * PI) * r * r;

        printf("Case %d: %.2f\n", i++, greenArea);
    }
    return 0;
}