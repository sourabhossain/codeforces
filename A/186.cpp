#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, ss;
    cin >> s >> ss;
    int x = 0, y = 0;

    for(int i = 0; s[i]; i++) {
        if(s[i] != ss[i]) {
            y = x;
            x = i;
        }
    }
    swap(s[x], s[y]);

    if(s == ss) {
        puts("YES");
    }
    else {
        puts("NO");
    }

    return 0;
}