#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    return (n & 1)? -(n - (n >> 1)) : n >> 1;
}

int main()
{
    int q, l, r;

    scanf("%d", &q);

    while(q--) {
        scanf("%d%d", &l, &r);
        printf("%d\n", solve(r) - solve(l - 1));
    }

    return 0;
}
