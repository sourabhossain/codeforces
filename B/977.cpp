#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max = -1;
    string s, temp, ans;
    map <string, int> mp;

    cin >> n >> s;

    for(int i = 1; i < n; i++) {
        temp.clear();
        temp.push_back(s[i - 1]);
        temp.push_back(s[i]);

        mp[temp]++;

        if(mp[temp] > max) {
            ans = temp;
            max = mp[temp];
        }
    }

    cout << ans << endl;

    return 0;
}