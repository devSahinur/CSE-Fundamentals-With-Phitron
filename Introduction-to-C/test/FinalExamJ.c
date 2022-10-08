
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Sahinur
{
    char S[105];
    char T[105];
};
int main()
{
    int n;
    scanf("%d", &n);
    struct Sahinur st[n + 5];
    int isGet = false;
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", &st[i].S, &st[i].T);
        for (int j = 0; j < i; j++)
        {
            if (strcmp(st[i].S, st[j].S) == 0 && strcmp(st[i].T, st[j].T) == 0)
            {
                isGet = true;
            }
        }
    }
    if (isGet)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}