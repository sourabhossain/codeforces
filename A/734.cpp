#include <bits/stdc++.h>

int main()
{
    int T, a = 0, b = 0;
    char c;

    scanf("%d ", &T);

    while(T--) {
        c = getchar();

        if(c == 'A') {
            a++;
        }
        else {
            b++;
        }
    }

    if(a > b) {
        puts("Anton");
    }
    else if(a < b) {
        puts("Danik");
    }
    else {
        puts("Friendship");
    }

    return 0;
}