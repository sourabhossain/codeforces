#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    string s, t;

    cin >> n >> m >> s >> t;

    if(n - 1 > m) {
        puts("NO");
        return 0;
    }

    while(s.size() && s.back() == t.back()) {
        s.pop_back();
        t.pop_back();
    }

    int length = s.size();

    if(length && s.back() == '*') {
        for(int i = 0; i < length - 1; i++) {
            if(s[i] != t[i]) {
                puts("NO");
                return 0;
            }
        }

        puts("YES");
    } else {
        if(s == t) {
            puts("YES");
        } else {
            puts("NO");
        }
    }

    return 0;
}
