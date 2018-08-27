#include <bits/stdc++.h>

int main()
{
    int n, m;

    scanf("%d%d", &n, &m);
    printf("%d\n", m % (int)pow(2, n));

    return 0;
}