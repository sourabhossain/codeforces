#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;
    set <int> s;

    scanf("%d", &T);

    while(T--) {
        scanf("%d", &n);

        if(n != 0) {
            s.insert(n);
        }
    }

    printf("%d\n", s.size());

    return 0;
}