#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    for(int i = n + 1; i <= n << 1; i++) {
        printf("%d ", i);
    }

    return 0;
}
