#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, cnt = 0;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);

        if(n) {
            cnt++;
        }
    }

    if(cnt) {
        puts("HARD");
    } else {
        puts("EASY");
    }

    return 0;
}
