#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int i, j;

    cin >> s >> t;

    for(i = s.size() - 1, j = t.size() - 1; i >= 0 && j >= 0 && s[i] == t[j]; i--, j--);

    cout << i + j + 2 << endl;

    return 0;
}
