#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);
    int n, temp = 0, c = 0;

    while(T--) {
        scanf("%d", &n);

        if(n != temp) {
            c++;
        }
        temp = n;
    }
    printf("%d\n", c);

    return 0;
}