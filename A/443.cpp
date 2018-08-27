#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set <char> c;

    for(int i = 0; s[i]; i++) {
        c.insert(s[i]);
    }
    int T = c.size();
    if(T == 2) {
        printf("0\n");
    }
    else if(T == 3) {
        printf("1\n");
    }
    else {
       printf("%d\n", T - 4);
    }

    return 0;
}