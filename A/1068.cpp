#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
 	long long n, m, k, l;

	scanf("%lld%lld%lld%lld", &n, &m, &k, &l);
    
    n /= m;
    m = (m + k + l - 1) / m;

	printf("%lld\n", (n >= m)? m : -1);

	return 0;
}