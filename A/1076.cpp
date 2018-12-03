#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;
    int removeElement = n - 1;

    for(int i = 0; i < n - 1; i++) {
        if(s[i] > s[i + 1]) {
            removeElement = i;
            break;
        }
    }

    s.erase(s.begin() + removeElement);
    cout << s << endl;

    return 0;
}
