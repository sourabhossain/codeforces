#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    set<int> s;
    int n;

    while(T--) {
        scanf("%d", &n);
        s.insert(n);
    }

    n = s.size();

    if(n == 3) {
        set<int>::iterator it = s.begin();
        int a = *it, b = *(++it), c = *(++it);
        (b - a == c - b)? puts("YES") : puts("NO");
    } else if(n > 3) {
        puts("NO");
    } else {
        puts("YES");
    }

    return 0;
}
