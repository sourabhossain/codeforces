#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;

	scanf("%d", &T);

	while(T--) {
		int n, p = 0;

		scanf("%d", &n);

		while(n) {
			p += (n & 1);
			n >>= 1;
		}

		printf("%d\n", 1 << p);
	}

	return 0;
}