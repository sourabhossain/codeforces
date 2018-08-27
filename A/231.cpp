#include <bits/stdc++.h>

int main()
{
    int T;

    scanf("%d", &T);

    int t = 0;

    while(T--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        if((a + b + c) >= 2) {
            t++;
        }
    }
    printf("%d\n", t);

    return 0;
}