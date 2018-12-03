#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int gcd(int a, int b) {
    while(b) {
		b ^= a ^= b ^= a %= b;
	}
	
	return a;
}

int main(int argc, char const *argv[])
{   
    int n;

    scanf("%d", &n);

    for(int i = n >> 1; i > 0; i--) {
    	if(gcd(i, n - i) == 1) {
            printf("%d %d\n", i, n - i);
    		break;
    	}
    }

	return 0;
}