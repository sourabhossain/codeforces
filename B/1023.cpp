#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;

    scanf("%I64d%I64d", &n, &k);
    k -= n;

    if(k < n) {
        if(k > 0) {
            printf("%I64d\n", (n + 1 - k) >> 1);
        } else {
            printf("%I64d\n", (n - 1 + k) >> 1);
        }
    } else {
       puts("0");
    }

    return 0;
}
