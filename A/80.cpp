#include <bits/stdc++.h>

int ara[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    if(n > m) {
        puts("NO");
        return 0;
    }

    for(int i = 1; i < 15; i++) {
        if(ara[i - 1] == n && ara[i] == m) {
           puts("YES");
           return 0;
        }
    }
    puts("NO");

    return 0;
}