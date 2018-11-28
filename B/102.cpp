#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;

    cin >> n;

    if(n.size() == 1) {
        puts("0");
        return 0;
    }

    int count = 1;

    while(true) {
        int sum = 0;

        for(int i = 0; n[i]; i++) {
            sum += (n[i] - '0');
        }

        if(sum < 10) {
            break;
        } else {
            count++;
            n = to_string(sum);
        }
    }

    printf("%d\n", count);

    return 0;
}
