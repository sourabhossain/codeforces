#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    a = abs(a - b);
    b = a / 2;
    b = 2 * (b * (b + 1) / 2);

    if(a & 1) {
        b += (a / 2) + 1;
    }

    printf("%d\n", b);

    return 0;
}
