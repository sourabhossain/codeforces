#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, l1, l2, r1, r2;

    scanf("%d", &q);

    while(q--) {
        scanf("%d%d%d%d", &l1, &r1, &l2, &r2);

        if(l1 == l2) {
            l2++;
        }

        printf("%d %d\n", l1, l2);
    }

    return 0;
}
