#include <bits/stdc++.h>

using namespace std;

int main()
{
    char table[4][4];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> table[i][j];
            table[i][j] = (table[i][j] == '#')? 1 : 0;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(table[i][j] + table[i + 1][j] + table[i][j + 1] + table[i + 1][j + 1] != 2) {
                puts("YES");
                return 0;
            }
        }
    }

    puts("NO");

    return 0;
}
