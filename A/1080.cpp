#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    scanf("%d%d", &n, &m);
    printf("%d\n", (1 + ((n << 1) - 1) / m) + (1 + ((n * 5) - 1) / m) + (1 + ((n * 8) - 1) / m));

    return 0;
}
