#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    set<int> s;

    scanf("%lld", &n);
    int root = sqrt(n);

    for(int i = 1; i <= root; i++) {
        if(n % i == 0) {
            s.insert(i);
            s.insert(n / i);
        }
    }

    printf("%d\n", s.size());

    return 0;
}
