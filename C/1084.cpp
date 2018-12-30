#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main()
{
    string s;

    cin >> s;
    long long result = 1, cnt = 0;

    for(char c : s) {
        if(c == 'a') {
            cnt++;
        } else if(c == 'b') {
            result = (result % MOD) * ++cnt;
            cnt = 0;
        }
    }

    cout << (result * ++cnt - 1) % MOD << endl;

    return 0;
}
