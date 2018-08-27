#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int number[n][3];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &number[i][j]);
        }
    }

    int temp;
    for(int i = 0; i < 3; i++) {
        temp = 0;
        for(int j = 0; j < n; j++) {
            temp += number[j][i];
        }

        if(temp) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");

    return 0;
}