#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    sort(v.begin(), v.end());
    int result = 0;

    for(int i = 0; i < n; i += 2) {
        result += v[i + 1] - v[i];
    }

    printf("%d\n", result);


    return 0;
}