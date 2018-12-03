#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    for(int i = 1; i < n; i++) {
        if(s[i - 1] != s[i]) {
            printf("YES\n%c%c\n", s[i - 1], s[i]);
            return 0;
        }
    }

    puts("NO");

    return 0;
}
