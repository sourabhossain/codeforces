#include <stdio.h>

int main()
{
    int w;

    scanf("%d", &w);

    if(w != 2) {
       if(w & 1) {
            printf("NO\n");
       }
       else {
            printf("YES\n");
       }
    }
    else {
        printf("NO\n");
    }

    return 0;
}