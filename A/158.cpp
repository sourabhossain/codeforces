#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n;

    scanf("%d%d", &T, &n);

    vector <int> v;
    int Max;

    for(int i = 0; i < T; ++i) {
        int t;
        scanf("%d", &t);
        v.push_back(t);

        if(i + 1 == n) {
            Max = t;
        }
    }

    int c = 0;
    for(int i = 0; i < T; ++i) {
        if(v[i] >= Max && v[i] > 0) {
            ++c;
        }
    }
    printf("%d\n", c);

    return 0;
}