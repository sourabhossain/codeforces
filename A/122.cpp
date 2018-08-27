#include <bits/stdc++.h>

int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

int main()
{
    int n;
    bool ck = false;
    scanf("%d", &n);

    for(int i = 0; i < 14; i++) {
        if(!(n % lucky[i])) {
            ck = true;
            break;
        }
    }

    if(ck) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}