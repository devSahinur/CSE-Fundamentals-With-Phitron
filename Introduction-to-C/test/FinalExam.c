
#include <stdio.h>
// problem E
int main(void)
{
    int n, t, i, j, k;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int s[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &s[j]);
        }
        int min = 1001;
        for (j = 0; j < n - 1; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (s[j] - s[k] < min && s[j] >= s[k])
                {
                    min = s[j] - s[k];
                }
                else if (s[k] - s[j] < min && s[k] >= s[j])
                {
                    min = s[k] - s[j];
                }
            }
        }
        printf("%d\n",min);
    }
}