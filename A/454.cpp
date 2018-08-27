#include <bits/stdc++.h>

int main()
{
    int T;
    scanf("%d", &T);
    int n = 1, s = (T + 1) / 2;

    for(int i = 0; i < s; i++) {
        for(int j = i + 1; j < s; j++) {
            putchar('*');
        }

        for(int j = 0; j < n; j++) {
            putchar('D');
        }

        for(int j = i + 1; j < s; j++) {
            putchar('*');
        }
        putchar('\n');
        n += 2;
    }

    n -= 4;
    for(int i = s - 1; i > 0; i--) {
        for(int j = i; j < s; j++) {
            putchar('*');
        }

        for(int j = 0; j < n; j++) {
            putchar('D');
        }

        for(int j = i; j < s; j++) {
            putchar('*');
        }
        putchar('\n');
        n -= 2;
    }

    return 0;
}