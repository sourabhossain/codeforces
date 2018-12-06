#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{ 
	int n, c;

	scanf("%d%d", &n, &c);
	int data[n + 1] = {0}, result = 0;

	for(int i = 1; i <= n; i++) {
		scanf("%d", &data[i]);
	}


	for(int i = 1; i <= n; i++) {
		result++;

		if(data[i] - data[i - 1] > c) {
			result = 1; 
		}
	}

	printf("%d\n", result);

	return 0;
}