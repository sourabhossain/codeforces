#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    scanf("%d%d", &n, &k);
    vector <int> v(++n);

    v[0] = 1;

    for(int i = 1; i < n; i++) {
        scanf("%d", &v[i]);
    }

    sort(v.begin(), v.end());

    if(v[k] == v[k + 1]) {
        puts("-1");
    } else {
        printf("%d\n", v[k]);
    }

    return 0;
}