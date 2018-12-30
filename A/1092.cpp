#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    while(T--) {
        int a, b;

        scanf("%d%d", &a, &b);
        string result = "";
        int c = a % b;

        while(c--) {
            result += "a";
        }

        c = a / b;

        for(int i = 0; i < b; i++) {
            for(int j = 0; j < c; j++) {
                result += ('a' + i);
            }
        }

        cout << result << endl;
    }

    return 0;
}