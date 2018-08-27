#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int ab = s.find("AB");
    int ba = s.find("BA");

    if(ab != -1 && s.find("BA", ab + 2) != -1 || ba != -1 && s.find("AB", ba + 2) != -1) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}