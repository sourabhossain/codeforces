#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);
    vector<int> v[n + 1];
    int node;

    for(int i = 2; i <= n; i++) {
        scanf("%d", &node);
        v[node].push_back(i);
    }

    int x = 0, y = 0;
    
    for(int i = 1; i <= n; i++) {
        int c = 0;

    	if(!v[i].empty()) {
    		x++;

    		for(int j = 0, length = v[i].size(); j < length; j++) {
    			if(v[v[i][j]].empty()) {
    				c++;
    			}
    		}
    	}

    	if(c > 2) {
    		y++;
    	}
    }

    (x == y)? puts("YES") : puts("NO");

	return 0;
}