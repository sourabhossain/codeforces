#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	long long l, r;

	scanf("%d", &T);

	while(T--) {
		scanf("%lld%lld", &l, &r);

		while((l | (l + 1)) <= r) {
			l |= (l + 1);
		}

		printf("%lld\n", l);
	}

	return 0;
}