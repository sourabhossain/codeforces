#include <stdio.h>
#include <math.h>

int main()
{
    int T;

    scanf("%d", &T);

    int n, temp, min = -1000000;

    while(T--) {
        scanf("%d", &n);

        temp = (int)sqrt(n);

        if(temp * temp != n) {
            if(min < n) {
                min = n;
            }
        }
    }
    printf("%d\n", min);

    return 0;
}