#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;
    int T = s.size();

    for(int i = 0; i < T; i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");

    return 0;
}