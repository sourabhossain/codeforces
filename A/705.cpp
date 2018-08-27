#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i & 1) {
            printf("I hate");
        }
        else {
            printf("I love");
        }

        if(i + 1 <= n) {
            printf(" that ");
        }
    }
    printf(" it\n");

    return 0;
}