#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string binary;

    cin >> n >> binary;
    n = count(binary.begin(), binary.end(), '0');
    binary = (binary[0] == '1')? "1" : "";

    while(n--) {
        binary += "0";
    }

    cout << binary << endl;

    return 0;
}
