#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp;
    vector<int> a, b, c;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &temp);
        (temp == 1)? a.push_back(i + 1) : (temp == 2)? b.push_back(i + 1) : c.push_back(i + 1);
    }

    temp = min(a.size(), min(b.size(), c.size()));
	printf("%d\n", temp);

	for(int i = 0; i < temp; i++) {
		printf("%d %d %d\n", a[i], b[i], c[i]);
	}

    return 0;
}
