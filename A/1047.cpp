#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    int d = n % 3;

    if(d < 2) {
        printf("1 1 %d\n", n - 2);
    } else {
        printf("1 2 %d\n", n - 3);
    }

    return 0;
}
