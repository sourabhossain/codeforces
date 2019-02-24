#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, k;

    scanf("%lld%lld%lld", &n, &m, &k);
    long long arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    sort(arr, arr + n);
    long long a = arr[n - 1];
    long long b = arr[n - 2];
    long long x = m / (k + 1);
    long long sum = (a * k + b) * x;
    x = m - x * (k + 1);
    sum += a * x;

    printf("%lld\n", sum);

    return 0;
}