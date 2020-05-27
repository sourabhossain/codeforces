#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, p, q, cnt = 0;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d", &n);

        if(n & 1) {
            q = i;
        } else {
            cnt++;
            p = i;
        }
    }

    printf("%d\n", (cnt == 1)? p : q);

    return 0;
}
