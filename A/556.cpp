#include <bits/stdc++.h>

int main()
{
   int T;

   scanf("%d ", &T);
   int c = 0;
   char n;

   while(T--) {
      n = getchar();

      if(n & 1) {
         c++;
      }
      else {
        c--;
      }
   }

   printf("%d\n", abs(c));

    return 0;
}