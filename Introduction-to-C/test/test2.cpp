void solve()
{
    int a[3][3];
    int r[3] = {0, 0, 0}, c[3] = {0, 0, 0}, d1 = 0, d2 = 0;
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    bool p = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            r[i] += a[i][j];
            if (i == j)
                d1 += a[i][j];
            if (j == 2 - i)
                d2 += a[i][j];
            c[j] += a[i][j];
        }
    }
    if (r[0] == r[1] && r[1] == r[2])
        p = 0;
    if (p)
    {
        printf("NO\n");
        return;
    }
    p = 1;
    if (c[0] == c[1] && c[1] == c[2] && c[0] == r[0])
        p = 0;
    if (p)
    {
        printf("NO\n");
        return;
    }
    p = 1;
    if (c[0] == d1 && d1 == d2)
        p = 0;

    if (p)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}