#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
#define sc(n) scanf("%d",&n)
const int MAXN = 2e5+5;
typedef long long ll;

int a, b, c;
char s[105];

bool cmp( int a, int b)
{
    return a>b;
}

int main()
{
    scanf("%s", s);
    int len = strlen(s);
    int flag1 = 0, flag2 = 0;
    for( int i = 0; i < len; i++) {
        if( s[i]=='0') {
            flag1 = 0;
            flag2++;
        }
        else {
            flag2 = 0;
            flag1++;
        }
        if( flag1>6 || flag2>6) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
