#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, result = 0;

	scanf("%d%d", &n, &m);

	while(n < m) {
		result++;
		(m & 1)? m++ : m >>= 1;
	}

	printf("%d\n", (n - m) + result);

	return 0;
}