#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    int a = 0, b = 0, x1, x2;

    while(T--) {
        scanf("%d%d", &x1, &x2);

        if(x1 > x2) {
            a++;
        }
        else if(x1 < x2) {
            b++;
        }
    }

    if(a > b) {
        puts("Mishka");
    }
    else if(a == b) {
        puts("Friendship is magic!^^");
    }
    else {
        puts("Chris");
    }

    return 0;
}