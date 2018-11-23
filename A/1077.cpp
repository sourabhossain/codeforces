#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    long long a, b, k;

    while(T--) {
        scanf("%lld%lld%lld", &a, &b, &k);
        printf("%lld\n", (a * (long long)ceil(k / 2.0)) - (b * (k >> 1)));
    }

    return 0;
}
