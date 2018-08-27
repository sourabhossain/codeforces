#include <bits/stdc++.h>

int main()
{
    int n;

    scanf("%d", &n);
    int c = 0;
    char s[25];

    while(n--) {
        scanf("%s", s);

        if(!strcmp(s, "Tetrahedron")) {
            c += 4;
        }
        else if(!strcmp(s, "Cube")) {
            c += 6;
        }
        else if(!strcmp(s, "Octahedron")) {
            c += 8;
        }
        else if(!strcmp(s, "Dodecahedron")) {
            c += 12;
        }
        else {
            c += 20;
        }
    }

    printf("%d\n", c);

    return 0;
}