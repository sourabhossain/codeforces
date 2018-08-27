#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    vector <char> v;

    scanf("%d", &T);

    while(T--) {
        char c;

        scanf(" %c", &c);
        v.push_back(c);
    }

    int t = 0;
    T = v.size();

    for(int i = 1; i < T; ++i) {
        if(v[i - 1] == 'R' && v[i] == 'R') {
            t++;
        }
        else if(v[i - 1] == 'G' && v[i] == 'G') {
            t++;
        }
        else if(v[i - 1] == 'B' && v[i] == 'B') {
            t++;
        }
    }

    printf("%d\n", t);

    return 0;
}