#include <bits/stdc++.h>

int T[31];

void t_number() {
    for(int i = 1; i < 32; i++) {
        T[i - 1] = (i * (i + 1)) / 2;
    }
}

int main()
{
    t_number();
    int n;
    scanf("%d", &n);

    for(int i = 0; i < 31; i++) {
        if(T[i] == n) {
            puts("YES");
            return 0;
        }
    }

    puts("NO");

    return 0;
}