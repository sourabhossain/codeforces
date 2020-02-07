#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, sum = 0;

    scanf("%d%d", &n, &m);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + n);

    for(int i = 0; i < m; i++) {
        if(arr[i] < 0) {
            sum += (-arr[i]);
        }
    }

    printf("%d\n", sum);

    return 0;
}
