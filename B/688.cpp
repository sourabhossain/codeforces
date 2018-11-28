#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;

    cin >> n;
    printf("%s", n.c_str());
    reverse(n.begin(), n.end());
    puts(n.c_str());

    return 0;
}
