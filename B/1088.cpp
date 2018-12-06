#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    scanf("%d%d", &n, &k);
    int data[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    sort(data, data + n);
    printf("%d\n", data[0]);
    k--;
    int sum = data[0];

    for(int i = 1; i < n; i++) {
        if(data[i] - sum > 0 && k) {
            printf("%d\n", data[i] - sum);
            sum += data[i] - sum;
            k--;
        }
    }

    while(k--) {
        puts("0");
    }

    return 0;
}
