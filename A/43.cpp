#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    string s[n];

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s, s + n);
    cout << s[n / 2] << endl;

    return 0;
}