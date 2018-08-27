#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;

    scanf("%d", &T);

    set <int> s;
    int temp;

    while(T--) {
        scanf("%d", &temp);

        if(temp) {
            s.insert(temp);
        }
    }
    printf("%d\n", s.size());

    return 0;
}