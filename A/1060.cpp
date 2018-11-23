#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;
    printf("%d\n", min(n / 11, count(s.begin(), s.end(), '8')));

    return 0;
}
