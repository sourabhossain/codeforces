#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;

	scanf("%d%d", &n, &m);
	int data[n];

	for(int i = 0; i < n; i++) {
		scanf("%d", &data[i]);
	}
    
    sort(data, data + n);
    int max = data[n - 1] + m;

	while(m--) {
		data[0]++;
		sort(data, data + n);
	}

	printf("%d %d\n", data[n - 1], max);

	return 0;
}