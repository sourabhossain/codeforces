#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        long long a, b, c, d;

        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

        if(b >= a) {
            printf("%lld\n", b);
        } else if(d >= c) {
            puts("-1");
        } else {
            printf("%lld\n", (a-b+c-d-1) / (c-d) * c+b);
        }
    }

    return 0;
}
