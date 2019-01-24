#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int c = 0;

    cin >> str;

    for(int i = 1; i < str.size(); i++) {
        if(str[i - 1] == str[i]) {
            str.erase(i - 1, 2);
            i -= 2;
            c++;
        }
    }

    printf("%s\n", (c & 1)? "Yes" : "No");

    return 0;
}
