#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) {
			return 1;
		}
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);

	for(int i = 1; i <= 1000; i++) {
		int p = (n * i) + 1;

		if(isPrime(p)) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}