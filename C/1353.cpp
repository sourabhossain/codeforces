#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)

int main()
{
    int t;

    scanf("%d", &t);

    while(t--) {
        long long n, result = 0;

        scanf("%lld", &n);

        while(n - 1) {
            result += (n * (n - 1));
            n--;
        }

        printf("%lld\n", result);
    }

    return 0;
}
