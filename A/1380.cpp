#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;

    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int ans = 0;

        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                ans = i;
                break;
            }
        }

        if (ans) {
            printf("YES\n%d %d %d\n", ans, ans + 1, ans + 2);
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
