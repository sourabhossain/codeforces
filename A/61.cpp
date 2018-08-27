#include <bits/stdc++.h>

int main()
{
    char a[101], b[101], c[101];

    scanf("%s%s", a, b);

    int j = 0;
    for(int i = 0; a[i]; i++) {
        if(a[i] ^ b[i]) {
            c[j++] = '1';
        }
        else {
            c[j++] = '0';
        }
    }
    c[j] = '\0';

    printf("%s\n", c);

    return 0;
}