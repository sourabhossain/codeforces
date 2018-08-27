#include <bits/stdc++.h>

int main()
{
    int m, n;

    scanf("%d%d", &m, &n);
    bool c = false;

    for(int i = 0; i < m; i++) {
        if(i & 1) {
            if(c) {
                putchar('#');
                for(int j = 1; j < n; j++) {
                    putchar('.');
                }
                c = false;
            }
            else {
               for(int j = 1; j < n; j++) {
                  putchar('.');
               }
               putchar('#');
               c = true;
            }
        }
        else {
            for(int j = 0; j < n; j++) {
                putchar('#');
            }
        }
        putchar('\n');
    }

    return 0;
}