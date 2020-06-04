#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d, cnt = 0;

    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

    for(long long i = max(a + b, c); i <= b + c; i++) {
        cnt += (min({b - a + 1, c - b + 1, i - a - b + 1, b + c - i + 1}) * min(i - c, d - c + 1));
    }

    printf("%lld\n", cnt);

    return 0;
}
