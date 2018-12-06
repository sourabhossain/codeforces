#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a = 0, b = 0;

    cin >> s;

    for(char c : s) {
        (c == '-')? a++ : b++;
    }

    (!b || !(a % b))? puts("YES") : puts("NO");

    return 0;
}
