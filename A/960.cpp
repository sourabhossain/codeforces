#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	string temp = s;
	sort(s.begin(), s.end());

	if(s == temp) {
		map<char, int> m;

		for(int i = 0, length = s.size(); i < length; i++) {
			m[s[i]]++;
		}

		if(m['a'] && m['b'] && (m['a'] == m['c'] || m['b'] == m['c'])) {
			puts("YES");
		} else {
			puts("NO");
		}
	} else {
		puts("NO");
	}

	return 0;
}