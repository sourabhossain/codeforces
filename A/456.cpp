#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a, b, T = 0;

    while(n--) {
        scanf("%d%d", &a, &b);

        if(a != b) {
            T++;
        }
    }

    if(T) {
        puts("Happy Alex");
    }
    else {
        puts("Poor Alex");
    }

    return 0;
}