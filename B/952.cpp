#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	string str;

	for(int i = 0; i < 10; i++) {
		printf("%d\n", i);
		getline(cin, str);

		if(str == "no") {
			continue;
		}

		if(str == "great" || str == "dont think so" || str == "not bad" || str == "cool" || str == "dont touch me") {
			puts("normal");
			return 0;
		}

		if(str == "dont even" || str == "are you serious" || str == "worse" || str == "terrible" || str == "go die in a hole" || str == "no way") {
			puts("grumpy");
			return 0;
		}	
	}

	return 0;
}