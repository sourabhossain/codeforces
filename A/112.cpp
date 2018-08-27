#include <bits/stdc++.h>

int main()
{
    char a[101], b[101];

    scanf("%s%s", a, b);

    int len = strlen(a);

    for(int i = 0; i < len; i++) {
        if(a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;
        }
    }

    len = strlen(b);
    for(int i = 0; i < len; i++) {
        if(b[i] >= 'A' && b[i] <= 'Z') {
            b[i] = b[i] + 32;
        }
    }

    printf("%d\n", strcmp(a, b));

    return 0;
}