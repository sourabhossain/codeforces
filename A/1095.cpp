#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    for(int i = 0, k = 1; i < n; i += k, k++) {
        putchar(s[i]);
    }
    putchar('\n');

    return 0;
}