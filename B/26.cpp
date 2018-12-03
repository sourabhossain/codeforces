#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
 	string str;

	cin >> str;
	int bracket = 0, result = 0;

	for(char c : str) {
		if(c == '(') {
			bracket++;
		} else if(bracket) {
			--bracket;
			result += 2;
		}
	}

	printf("%d\n", result); 

	return 0;
}