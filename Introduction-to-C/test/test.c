#include <stdio.h>
#include <string.h>

int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
int count_zero(char S[], int n)
{
    int ans = 0;
    int i = 0;

    while (i < n)
    {
        int cnt0 = 0, cnt1 = 0;
        if (S[i] == '0')
        {
            while (i < n && S[i] == '0')
            {
                cnt0++;
                i++;
            }
            int j = i;

            while (j < n && S[j] == '1')
            {
                cnt1++;
                j++;
            }
        }
        else
        {

            while (i < n && S[i] == '1')
            {
                cnt1++;
                i++;
            }

            int j = i;

            while (j < n && S[j] == '0')
            {
                cnt0++;
                j++;
            }
        }
        ans += min(cnt0, cnt1);
    }

    return ans;
}

int main()
{
    char S[] = "00111111";
    int n = strlen(S);

    printf("%d", count_zero(S, n));
    return 0;
}
