#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];
    scanf("%s", s);
    int c = 0, t = 1;

    for(int i = 0; s[i]; i++) {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
           if(t > c) {
              c = t;
           }
           t = 1;
        }
        else {
            t++;
        }
    }

    if(c < t) {
        c = t;
    }

    printf("%d\n", c);

    return 0;
}