#include <bits/stdc++.h>

int main()
{
    char s[101];

    scanf("%s", s);

    int a = 0, b = 0;

    for(int i = 0; s[i]; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            a++;
        }
        else {
            b++;
        }
    }

    if(a > b) {
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 32;
            }
        }
    }
    else {
        for(int i = 0; s[i]; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] += 32;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}