#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <map>
#define MAX 200007

using namespace std;
typedef long long LL;

int n,k;
int a[MAX];
map<int,LL> dp[4];
LL ans;

int main ( )
{
    while (~scanf ( "%d%d" , &n , &k ) )
    {
        ans = 0;
        for ( int i = 0 ; i < 4 ; i++ )
            dp[i].clear();
        for ( int i = 1 ; i <= n ; i++ )
            scanf ( "%d" , &a[i] );
        for ( int i = 1 ; i <= n ; i++ )
        {
            int x = a[i];
            if ( x%k == 0 )
            {
                dp[3][x] += dp[2][x/k];
                dp[2][x] += dp[1][x/k];
            }
            dp[1][x] += 1;
        }
        map<int,LL>::iterator it = dp[3].begin();
        for ( ; it != dp[3].end() ; it++ )
            ans += (*it).second;
        printf ( "%I64d\n" , ans );
    }
}
