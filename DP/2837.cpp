#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#define MAX 2007

using namespace std;

typedef long long LL;

int n,k;
const LL mod=1e9+7;
LL dp[MAX][MAX];

int main ( )
{
    while ( ~scanf ( "%d%d" , &n , &k ) )
    {
        memset ( dp , 0 , sizeof ( dp ) );
        for ( int i = 1 ; i <= n ; i++ )
            dp[1][i] = 1;
        for ( int i = 2 ; i <= k ; i++ )
            for ( int j = 1 ; j <= n ; j++ )
                for ( int k = 1 ; k*k<=j ; k++ )
                {
                    if ( j%k ) continue;
                    dp[i][j] += dp[i-1][k];
                    dp[i][j] %= mod;
                    int x = j/k;
                    if ( x == k ) continue;
                    dp[i][j] += dp[i-1][x];
                    dp[i][j] %= mod;
                }
        int ans = 0;
        for ( int i = 1 ; i <= n ; i++ )
        {
            ans += dp[k][i];
            ans %= mod;
        }
        printf ( "%d\n" , ans );
    }
}