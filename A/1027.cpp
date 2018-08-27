#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        string s;
        int n, temp;
        bool ck = true;

        cin >> n >> s;

        for(int i = 0; i < n; i++) {
            temp = abs(s[i] - s[--n]);

            if(temp != 0 && temp != 2) {
                puts("NO");
                ck = false;
                break;
            }
        }

        if(ck) {
            puts("YES");
        }
    }

    return 0;
}
