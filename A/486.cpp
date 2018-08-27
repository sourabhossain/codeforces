#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    long long even = n / 2;
    even = even * (even + 1);

    long long odd = (n + 1) / 2;
    odd *= odd;

    cout << even - odd << endl;

    return 0;
}