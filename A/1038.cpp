#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int result[26];

int main(int argc, char const *argv[])
{
	int n, k;
	char c;

	scanf("%d%d", &n, &k);

	for(int i = 0; i < n; i++) {
		cin >> c;
		result[c - 'A']++;
	}

	n = INT_MAX;
	for(int i = 0; i < k; i++) {
		n = min(n, result[i]);
	}

	printf("%d\n", n * k);

	return 0;
}