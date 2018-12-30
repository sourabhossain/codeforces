#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d", &n);
	int arr[n];

	for(int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}

	bool ck = true;

	for(int i = 1; i < n; i++) {
		if(abs(arr[i] - arr[i - 1]) > 1) {
			ck = false;
			break;
		}
	}

	(ck)? puts("YES") : puts("NO");

	return 0;
}