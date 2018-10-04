#include <bits/stdc++.h>

using namespace std;

bool almostPrime(int n) {
    int c = 0;

    for(int i = 2; n > 1 && i <= n; i++) {
        if(n % i == 0) {
            c++;

            while(n % i == 0) {
                n /= i;
            }
        }
    }

    return c == 2;
}

int main()
{
    int n, ans = 0;

    scanf("%d", &n);

    for(int i = 6; i <= n; i++) {
        if(almostPrime(i)) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
