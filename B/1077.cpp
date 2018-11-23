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

    int c = 0;

    for(int i = 1; i < n - 1; i++) {
        if(v[i - 1] == 1 && v[i] == 0 && v[i + 1] == 1) {
            c++;
            v[i + 1] = 0;
        }

    }

    printf("%d\n", c);

    return 0;
}
