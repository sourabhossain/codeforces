#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, result = 0;

    cin >> r >> c;
    char table[r][c];

    for(int i = 0; i < r; i++) {
        bool ck = true;

        for(int j = 0; j < c; j++) {
            cin >> table[i][j];

            if(table[i][j] == 'S') {
                ck = false;
            }
        }

        if(ck) {
            result += c;

            for(int j = 0; j < c; j++) {
                table[i][j] = 'V';
            }
        }
    }

    for(int i = 0; i < c; i++) {
        bool ck = true;
        int cnt = 0;

        for(int j = 0; j < r; j++) {
            if(table[j][i] == 'S') {
                ck = false;
                break;
            } else if(table[j][i] != 'V') {
                cnt++;
            }
        }

        if(ck) {
            result += cnt;
        }
    }

    printf("%d\n", result);

    return 0;
}
