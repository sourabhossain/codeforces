#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x, y, ans;

    scanf("%lf%lf", &x, &y);

    ans = (x * log(y)) - (y * log(x));

    if(ans > 0.0) {
        puts("<");
    } else if(ans < 0.0) {
        puts(">");
    } else {
        puts("=");
    }

    return 0;
}
