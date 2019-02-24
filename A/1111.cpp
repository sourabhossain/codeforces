#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string s, t;

    cin >> s >> t;

    if(s.size() != t.size()) {
        puts("No");
        return 0;
    }

    for(int i = 0, length = s.size(); i < length; i++) {
        if((isVowel(s[i]) && isVowel(t[i])) || (isVowel(s[i]) == 0 && isVowel(t[i]) == 0)) {
            continue;
        }

        puts("No");
        return 0;
    }

    puts("Yes");

    return 0;
}
