#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);
	printf("%d\n", (n & 1)? ((n * n) >> 1) + 1 : (n * n) >> 1);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if((i & 1) && (j & 1) || !(i & 1) && !(j & 1)) {
				putchar('C');
			} else {
				putchar('.');
			}
		}
		putchar('\n');
	}

	return 0;
}