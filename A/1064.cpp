#include <bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(int argc, char const *argv[])
{
 	int data[3];

	scanf("%d%d%d", &data[0], &data[1], &data[2]);
	sort(data, data + 3);
	printf("%d\n", max(0, data[2] - (data[0] + data[1]) + 1));

	return 0;
}