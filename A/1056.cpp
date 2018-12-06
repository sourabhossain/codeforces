#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	map<int, int> m;
	int n, T, temp;

	scanf("%d", &T);

	for(int i = 0; i < T; i++) {
		scanf("%d", &n);

		while(n--) {
			scanf("%d", &temp);
			m[temp]++;
		}
	}

	for(auto it = m.begin(); it != m.end(); it++) {
		if(it->second == T) {
			printf("%d ", it->first);
		}
	}
	putchar('\n');

	return 0;
}
