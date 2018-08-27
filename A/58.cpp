#include <bits/stdc++.h>

int main()
{
    char s[101], ck[] = "hello";

    scanf("%s", s);
    int j = 0, T = strlen(s);

    for(int i = 0; i < T; i++) {
        if(s[i] == ck[j]) {
            j++;
        }
    }

    if(j == 5) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}