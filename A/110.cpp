#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;

    for(int i = 0; s[i]; i++) {
        if(s[i] == '7' || s[i] == '4') {
            count++;
        }
    }

    if(count == 7 || count == 4) {
        puts("YES");
    }
    else {
        puts("NO");
    }

    return 0;
}