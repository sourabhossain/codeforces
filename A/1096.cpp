#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, l, r;

    scanf("%d", &T);

    while(T--) {
        scanf("%d%d", &l, &r);
        printf("%d %d\n", l, l * 2);
    }

    return 0;
}