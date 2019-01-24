#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    int data[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    sort(data, data + n);

    for(int i = n - 1; i > 0; i--) {
        if(data[i] == data[i - 1] || data[n - 1] % data[i]) {
            printf("%d %d\n", data[n - 1], data[i]);
            return 0;
        }
    }

    return 0;
}
