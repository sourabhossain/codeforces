#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    string s;

    cin >> n >> k >> s;
    string result = s;
    int index = 0;

    for(int i = 1; i < n; i++) {
        if(s.substr(0, i) == s.substr(n - i, i)) {
            index = i;
        }
    }

    s = s.substr(index, n);
    while(--k) {
        result += s;
    }

    cout << result + "\n";

    return 0;
}
