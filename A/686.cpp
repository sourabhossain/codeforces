#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, x, c = 0;
    char ch;
    long long n;

    cin >> T >> n;

    while(T--) {
        scanf(" %c %d", &ch, &x);

        if(ch == '+') {
            n += x;
        }
        else {
            if(n < x) {
                c++;
            }
            else {
                n -= x;
            }
        }
    }
    cout << n << " " << c << endl;

    return 0;
}