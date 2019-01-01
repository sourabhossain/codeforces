#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, b, r;

    scanf("%d%d%d", &y, &b, &r);

    while(y >= 0) {
        if(b >= y + 1 && r >= y + 2) {
            printf("%d\n", y + y + y + 3);
            break;
        }

        y--;
    }

    return 0;
}