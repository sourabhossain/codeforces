#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, temp;

    scanf("%I64d%I64d", &a, &b);

    while(a && b) {
        if(a >= (temp = 2*b)) {
           a %= temp;
        }
        else if(b >= (temp = 2*a)) {
            b %= temp;
        }
        else {
            break;
        }
    }

    printf("%I64d %I64d\n", a, b);

    return 0;
}