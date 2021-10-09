#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, j, k;

    scanf("%d%d%d%d", &n, &m, &j, &k);
    int a[n], b[m];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    printf("%s\n", (b[m - k] > a[j - 1])? "Yes" : "No");

    return 0;
}
