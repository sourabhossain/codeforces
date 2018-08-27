#include <bits/stdc++.h>
#define SIZE 10000000

bool isPrime[SIZE];

void prime() {
    isPrime[1] = true;
    for(int i = 4; i < SIZE; i += 2) {
        isPrime[i] = true;
    }

	int root = sqrt(SIZE);

	for(int i = 3; i <= root; i += 2) {
        if(!isPrime[i]) {
            for(int j = i * i; j < SIZE; j += i << 1) {
                isPrime[j] = true;
            }
        }
	}
}

int main()
{
    prime();
    int T;
    long long n;

    scanf("%d", &T);

    while(T--) {
        scanf("%I64d", &n);
        int root = (int)sqrt(n);

        if(((long long)root * (long long)root) == n && !isPrime[root]) {
            puts("YES");
        }
        else {
            puts("NO");
        }
    }

    return 0;
}