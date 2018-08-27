#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int b = 0, c = 0, temp;

    while(n--) {
        scanf("%d", &temp);

        if(temp > 0) {
            b += temp;
        }
        else {
            c += temp;
        }
    }
    printf("%d\n",  b - c);

    return 0;
}