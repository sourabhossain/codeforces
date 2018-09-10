#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    int k = 1, ans = 1;

    while(n > 1) {
        k <<= 1;
        n -= k;
        ans++;
    }
    printf("%d\n", ans);

    return 0;
}
