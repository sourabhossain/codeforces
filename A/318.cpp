#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;

    cin >> n >> k;

    long long T = (n + 1) / 2;

    if(T >= k) {
       cout << 2*(k - 1) + 1 << endl;
    }
    else {
        T = k - T;
        cout << 2 * T << endl;
    }

    return 0;
}