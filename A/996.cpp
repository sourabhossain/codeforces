#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result = 0;

    scanf("%d", &n);

    if(n >= 100) {
        result += n / 100;
        n %= 100;
    }

    if(n >= 20) {
        result += n / 20;
        n %= 20;
    }

    if(n >= 10) {
        result += n / 10;
        n %= 10;
    }

    if(n >= 5) {
        result += n / 5;
        n %= 5;
    }

    if(n >= 1) {
        result += n;
    }

    printf("%d\n", result);

    return 0;
}
