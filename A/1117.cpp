#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);
    int arr[n], maximum = 0, cnt = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        maximum = max(maximum, arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(maximum == arr[i]) {
            int c = 0, j = i;

            while(j < n && arr[j] == maximum) {
                c++, j++;
            }

            i = j - 1;
            cnt = max(cnt, c);
        }
    }

    printf("%d\n", cnt);

    return 0;
}
