#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
    set<char> s;
    int n;
    char c;
    
    cin >> n;
    cin.ignore();

    while(cin >> c) {
    	s.insert(tolower(c));
    }

    (s.size() == 26)? puts("YES") : puts("NO");

	return 0;
}