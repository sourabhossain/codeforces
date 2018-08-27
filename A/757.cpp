#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int B = 0, u = 0, l = 0, b = 0, a = 0, s = 0, r = 0;

    for(int i = 0; input[i]; i++) {
        if(input[i] == 'B') {
            B++;
        }
        else if(input[i] == 'u') {
            u++;
        }
        else if(input[i] == 'l') {
            l++;
        }
        else if(input[i] == 'b') {
            b++;
        }
        else if(input[i] == 'a') {
            a++;
        }
        else if(input[i] == 's') {
            s++;
        }
        else if(input[i] == 'r') {
            r++;
        }
    }

    cout << min(B, min((int)u / 2, min(l, min(b, min((int)a / 2, min(s, r)))))) << endl;

    return 0;
}