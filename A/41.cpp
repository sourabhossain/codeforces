#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    for(int i = a.size() - 1, j = 0; i >= 0; i--, j++) {
        if(a[i] != b[j]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    return 0;
}