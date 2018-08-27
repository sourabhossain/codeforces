#include <bits/stdc++.h>

int main()
{
    char s[101];

    scanf("%s", s);
    int len = strlen(s), c = 0;
    char ch = s[0];

    for(int i = 0; i < len; ) {
        while(ch == s[i]) {
            i++;
            c++;
        }

        if(c >= 7) {
            printf("YES\n");
            break;
        }
        else {
           ch = s[i++];
           c = 1;
        }
    }
    if(c < 7) {
        printf("NO\n");
    }

    return 0;
}