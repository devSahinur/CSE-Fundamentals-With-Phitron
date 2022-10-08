
#include <stdio.h>

int main(void)
{
    int L, R;
    scanf("%d %d", &L, &R);
    char S[100000];
    scanf("%s", &S);
    for (int i = L - 1; i < R; i++)
    {
        R--;
        char tmp = S[i];
        S[i] = S[R];
        S[R] = tmp;
    }
    printf("%s\n", S);
}