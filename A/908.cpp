#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int T = 0;
    for(int i = 0; s[i]; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || (s[i] >= '0' && s[i] <= '9' && (s[i] & 1))) {
            T++;
        }
    }
    printf("%d\n", T);

    return 0;
}