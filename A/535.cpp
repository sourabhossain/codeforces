#include <stdio.h>

int main()
{
    char a[][15] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    char b[][15] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    int n;

    scanf("%d", &n);
    if(n == 0) {
        printf("zero\n");
        return 0;
    }
    else if(n > 19) {
        int t = n / 10;
        printf("%s", b[t]);

        n -= (t*10);
        if(n > 0) {
            putchar('-');
        }
    }
    printf("%s\n", a[n]);

    return 0;
}