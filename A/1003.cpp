#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    int n, result = 0;
    map<int, int> m;

    while(T--) {
        scanf("%d", &n);
        result = max(result, ++m[n]);
    }

    printf("%d\n", result);

    return 0;
}
