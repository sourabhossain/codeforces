#include <bits/stdc++.h>

int f(int n) {
    int T = 1;

	while(n) {
		T *= n--;
	}

	return T;
}

int min(int a, int b) {
	if(a < b) {
		return a;
	}

	return b;
}

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n", f(min(a, b)));

	return 0;
}