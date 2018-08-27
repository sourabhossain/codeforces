#include <bits/stdc++.h>

int main()
{
    char s[1002], c[5];
    for(int i = 1, j = 0; i <= 370; i++) {
        int t = i, k;

        for(k = 0; t; k++) {
            c[k] = t % 10;
            t /= 10;
        }

        while(k != 0) {
            s[j++] = c[--k];
        }
    }

    int index;
    scanf("%d", &index);
    printf("%d\n", s[index - 1]);

    return 0;
}