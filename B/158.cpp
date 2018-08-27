#include <stdio.h>

int main()
{
    int T, n, ans, count[5] = {0};

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);
        count[n]++;
    }

    ans = count[4];

    if(count[3] >= count[1]) {
        count[1] = 0;
    } else {
        count[1] -= count[3];
    }

    ans += count[3];
    ans += (count[2] / 2);
    count[2] %= 2;
    count[1] += (count[2] * 2);
    ans += (count[1] / 4);
    count[1] %= 4;

    if(count[1]) {
        ans++;
    }

    printf("%d\n", ans);

    return 0;
}
