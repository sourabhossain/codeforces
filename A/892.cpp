#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    unsigned long long sum = 0;

    scanf("%d", &n);
    vector<int> data(n);

    for(int i = 0, temp; i < n; i++) {
        scanf("%d", &temp);
        sum += temp;
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    sort(data.begin(), data.end());
    ((data[n - 1] + data[n - 2]) >= sum)? puts("YES") : puts("NO");

    return 0;
}
