#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];

    scanf("%s", s);

    multiset <char> m;
    int len = strlen(s);

    for(int i = 0; i < len; ++i) {
        if(s[i] != '+') {
            m.insert(s[i]);
        }
    }

    for(multiset <char>::iterator i = m.begin(); i != m.end(); i++) {
        if(i != m.begin()) {
            putchar('+');
        }
        cout << *i;
    }
    putchar('\n');

    return 0;
}