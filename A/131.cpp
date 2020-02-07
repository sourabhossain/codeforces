#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt = 0, length = str.size();

    for(int i  = 1; i < length; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            cnt++;
        }
    }

    if(cnt == length - 1) {
        for(int i = 0; i < length; i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = tolower(str[i]);
            } else {
                str[i] = toupper(str[i]);
            }
        }
    }

    cout << str << endl;

    return 0;
}
