/*
 * Author Name: Sourab Hossain
 * Email: cpsourab@gmail.com
 */

#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)
#define DEGREE(radian) (radian * (180 / PI))
#define RADIAN(degree) ((degree * PI) / 180)

int dr[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int dc[] = {-1, +1, +0, +0, +1, +1, -1, -1};

int main(int argc, char const *argv[])
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    int t, n;
    string str;

    cin >> t >> n >> str;

    while(n--) {
        for(int i = 1; i < t; i++) {
            if(str[i - 1] == 'B' && str[i] == 'G') {
                swap(str[i - 1], str[i]);
                i++;
            }
        }
    }
    
    cout << str << endl;

    return 0;
}