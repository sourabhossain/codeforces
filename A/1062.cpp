#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    vector<int> v(n + 1);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }

    v.push_back(1001);

    int result = 0, c = 0;

    for(int i = 1; i <= n; i++) {
        if(v[i] == v[i - 1] + 1 && v[i] == v[i + 1] - 1) {
            c++;
        } else {
            result = max(result, c);
            c = 0;
        }
    }

    printf("%d\n", max(result, c));

    return 0;
}
