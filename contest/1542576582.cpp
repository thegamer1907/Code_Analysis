#include "bits/stdc++.h"
using namespace std;

const int N = 105;
char names[N][3];
char s[N];

bool check( char L, char R )
{
        return L == s[0] && R == s[1];
}

int main()
{
        scanf("%s", s);
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) scanf("%s", names[i]);

        for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                        if( check( names[i][0], names[i][1] ) || check( names[j][0], names[j][1] ) || check( names[i][1], names[j][0]  )  ) {
                                puts("YES");
                                return 0;
                        }
                }
        }

        puts("NO");



        return 0;
}
