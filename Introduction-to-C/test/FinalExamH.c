
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    int t, y;
    gets(a);
    y = strlen(a);
    for (int i = 2; i < y;)
    {
        if (a[i - 2] > a[i])
        {
            t = a[i - 2];
            a[i - 2] = a[i];
            a[i] = t;
            i = 2;
            continue;
        }
        i += 2;
    }
    puts(a);
}