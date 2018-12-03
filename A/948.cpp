#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
	int r, c;

	scanf("%d%d", &r, &c);
	char protect[r][c + 1];

	for(int i = 0; i < r; i++) {
		scanf("%s", protect[i]);
	}

	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(protect[i][j] == '.') {
				protect[i][j] = 'D';
			}

			if(protect[i][j] == 'S') {
				if(j > 0 && protect[i][j - 1] == 'W') {
					puts("No");
					return 0;
				}

				if(i > 0 && protect[i - 1][j] == 'W') {
					puts("No");
					return 0;
				}
				
				if(j < c - 1 && protect[i][j + 1] == 'W') {
					puts("No");
					return 0;
				}

				if(i < r - 1 && protect[i + 1][j] == 'W') {
                    puts("No");
					return 0;
				}	
			}
		}
	}

	puts("Yes");

	for(int i = 0; i < r; i++) {
		puts(protect[i]);
	}  

	return 0;
}