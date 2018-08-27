#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    scanf("%d%d", &m, &n);
    vector<string> c(m);

    for(int i = 0; i < m; i++) {
        cin >> c[i];
    }

    int i, j;
    bool ck = false;

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(c[i][j] == 'B') {
                ck = true;
                break;
            }
        }

        if(ck) {
            break;
        }
    }

    int row = 1, column = 1;

    while(i + 1 < m && c[i + 1][j] == 'B') {
        row++;
        i++;
    }

    while(j + 1 < n && c[i][j + 1] == 'B') {
        column++;
        j++;
    }

    printf("%d %d\n", (i + 1) - (row / 2), (j + 1) - (column / 2));

    return 0;
}
