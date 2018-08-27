#include <bits/stdc++.h>

int main()
{
    int k, n;

    scanf("%d%d", &k, &n);

    while(k > 1 && n--) {
        if(k % 10 == 0) {
            k /= 10;
        } else {
            k--;
        }
    }

    printf("%d\n", k);

    return 0;
}