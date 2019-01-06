#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, y, max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
    	scanf("%d%d", &x, &y);
    	min1 = min(min1, x), min2 = min(min2, y);
    }

    while(n--) {
    	scanf("%d%d", &x, &y);
    	max1 = max(max1, x), max2 = max(max2, y);
    }

    printf("%d %d\n", min1 + max1, min2 + max2);

	return 0;
}