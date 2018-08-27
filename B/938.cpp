#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int minimumNumber = 0, temp;

    while(n--) {
        scanf("%d", &temp);
        minimumNumber = max(minimumNumber, min(temp - 1, 1000000 - temp));
    }
    printf("%d\n", minimumNumber);

    return 0;
}