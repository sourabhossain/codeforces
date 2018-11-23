#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;

	scanf("%lld", &n);

	for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            printf("%lld\n", 1 + (n - i) / 2);
            return 0;
        }
	}

	puts("1");

	return 0;
}
