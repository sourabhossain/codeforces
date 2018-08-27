#include <bits/stdc++.h>

bool vowel(char charter) {
    return charter == 'a' || charter == 'e' || charter == 'i' || charter == 'o' || charter == 'u' || charter == 'y';
}

int main()
{
    int n;
    char s[101];

    scanf("%d%s", &n, s);

    for(int i = 0; i < n; i++) {
        putchar(s[i]);

        if(vowel(s[i])) {
            while(i < n - 1 && vowel(s[i + 1])) {
                i++;
            }
        }
    }
    putchar('\n');

    return 0;
}