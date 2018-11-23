#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0) {
            v[i]--;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d", v[i]);

        if(i + 1 != i) {
            putchar(' ');
        }
    }
    putchar('\n');

    return 0;
}