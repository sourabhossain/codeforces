#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i = 0, length = s.size(); i < length; i++) {
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            putchar(' ');
        } else {
            putchar(s[i]);
        }
    }
    putchar('\n');

    return 0;
}
