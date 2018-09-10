#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;

    cin >> n >> k;
    long long ans = k / n;

    if(k % n) {
        ans++;
    }
    cout << ans << endl;

    return 0;
}
