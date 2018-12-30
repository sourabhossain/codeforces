#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    scanf("%d%d", &n, &k);
    priority_queue<int> pq;

    for(int i = 0; i < 31; i++) {
        if(n & (1 << i)) {
            pq.push(1 << i);
        }
    }

    while(pq.size() < k) {
        int temp = pq.top();

        if(temp == 1) {
            break;
        }

        pq.pop();
        pq.push(temp >> 1);
        pq.push(temp >> 1);
    }

    if(pq.size() == k) {
        puts("YES");

        while(!pq.empty()) {
            printf("%d ", pq.top());
            pq.pop();
        }
        putchar('\n');
    } else {
        puts("NO");
    }

    return 0;
}
