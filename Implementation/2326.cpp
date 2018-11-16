#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
#define sc(n) scanf("%d",&n)
const int MAXN = 2e5+5;
typedef long long ll;

//int a, b, c;
char s[105];
int a[55];

bool cmp( int a, int b)
{
    return a>b;
}

int main()
{
    int n;
    sc(n);
    scanf("%s", s);
    int ans = 0, t = 0;
    for( int i = 1; i < n; i++) {
        if( s[i]==s[i-1]) {
            t++;
        }
        else {
            ans += t;
            t = 0;
        }
        if( i==n-1) ans+=t;
    }
    ans = max( ans, t);
    printf("%d\n", ans);
    return 0;
}
