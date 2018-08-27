#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n && s[i] == '<'; i++) {
        k++;
    }

    for(int i = n - 1; i >= 0 && s[i] == '>'; i--) {
        k++;
    }
    cout << k << endl;

    return 0;
}