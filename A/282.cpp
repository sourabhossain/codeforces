#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, x = 0;
    string s;

    scanf("%d", &T);

    while(T--) {
        cin >> s;

        if(s == "++X" || s == "X++") {
            x++;
        }
        else {
            --x;
        }
    }
    printf("%d\n", x);

    return 0;
}