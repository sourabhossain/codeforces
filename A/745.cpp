#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string f = s + s;
    cout << f.find(s, 1) << endl;

    return 0;
}