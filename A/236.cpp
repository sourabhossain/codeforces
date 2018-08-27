#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[101];

    scanf("%s", s);
    set <char> c;

    for(int i = 0; s[i]; i++) {
        c.insert(s[i]);
    }

    if(c.size() & 1) {
        printf("IGNORE HIM!\n");
    }
    else {
        printf("CHAT WITH HER!\n");
    }

    return 0;
}