#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input[1001];

    scanf("%s", input);

    char output[1001];
    output[0] = '.';
    int len = strlen(input), j = 0;

    for(int i = 0, ck = 0; i < len; i++) {
        if(input[i] == 'A' || input[i] == 'a' || input[i] == 'O' || input[i] == 'o' || input[i] == 'Y' || input[i] == 'y' || input[i] == 'E' || input[i] == 'e' || input[i] == 'U' || input[i] == 'u' || input[i] == 'I' || input[i] == 'i') {
            if(ck) {
                output[++j] = '.';
                ck = 0;
            }
        }
        else {
            if(output[j] != '.') {
                output[++j] = '.';
            }

            if(input[i] >= 'A' && input[i] <= 'Z') {
                output[++j] = input[i] + 32;
            }
            else {
                output[++j] = input[i];
            }
            ck = 1;
        }
    }
    if(output[j] == '.') {
        output[j] = '\0';
    }
    else {
        output[++j] = '\0';
    }

    printf("%s\n", output);

    return 0;
}