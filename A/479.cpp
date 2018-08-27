#include <bits/stdc++.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    int maximum = 0, value = a + (b * c);

    if(value > maximum) {
        maximum = value;
    }

    value = a * (b + c);
    if(value > maximum) {
        maximum = value;
    }

    value = a * b * c;
    if(value > maximum) {
        maximum = value;
    }

    value = (a + b) * c;
    if(value > maximum) {
        maximum = value;
    }

    value = a + b + c;
    if(value > maximum) {
        maximum = value;
    }

    printf("%d\n", maximum);

    return 0;
}