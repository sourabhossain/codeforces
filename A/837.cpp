#include <stdio.h>

int main()
{
    int n;
    char s[202];

    scanf("%d %[^\n]", &n, s);
    int T = 0, t = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            t++;
        }
        else if(s[i] == ' ') {
            if(T < t) {
                T = t;
            }
            t = 0;
        }
    }

    if(T < t) {
        T = t;
    }
    printf("%d\n", T);

    return 0;
}