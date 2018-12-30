#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);
	int arr[n + 2] = {};

	for(int i = 2; i <= n; i++) {
		if(!arr[i]) {
			for(int j = i << 1; j <= n; j += i) {
				arr[j] = i;
			}
		}

		arr[i] = i - arr[i] + 1;
	}
    
    int result = n;

	for(int i = arr[n]; i <= n; i++) {
		result = min(result, arr[i]);
	}

	printf("%d\n", result);

	return 0;
}