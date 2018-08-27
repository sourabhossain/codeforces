#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector <int> a(n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sum = 0;
    --n;

    for(int i = 1; i < n; i++) {
        if(((a[i] < a[i - 1]) && (a[i] < a[i + 1])) || ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))) {
            ++sum;
        }
    }
    printf("%d\n", sum);

    return 0;
}