#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int T, n;
    string str;

    scanf("%d", &T);

    while(T--) {
        cin >> n >> str;

        if(str.size() == 2) {
            if(str[0] < str[1]) {
                printf("YES\n2\n%c %c\n", str[0], str[1]);
            } else {
                puts("NO");
            }
        } else {
            printf("YES\n2\n%c %s\n", str[0], str.begin() + 1);
        }
    }

    return 0;
}