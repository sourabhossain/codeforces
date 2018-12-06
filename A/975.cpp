#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    set<set<char> > result;

    scanf("%d", &n);

    while(n--) {
        cin >> s;
        set<char> r = {s.begin(), s.end()};
        result.insert(r);
    }

    printf("%d\n", result.size());

    return 0;
}
