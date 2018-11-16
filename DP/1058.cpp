#include <bits/stdc++.h>
using namespace std;

const int N = 105;
int n , a[ N ] , dp[ N ];

int calc( int l , int r ) { return dp[ r ] - dp[ l - 1 ]; }

int main( int argc , char const *argv[] ) {
        scanf("%d",&n);
        for( int i = 1; i <= n; i++ ) scanf("%d",&a[i]) , dp[i] += dp[i-1] + a[i];
        int ans = 0;
        for( int i = 1; i <= n; i++ ) {
                for( int j = i; j <= n; j++ ) {
                        ans = max( ans , calc( 1 , i - 1 ) + calc( j + 1 , n ) + ( j - i + 1 ) - calc( i , j ) );
                }
        }
        printf("%d\n",ans);
        return 0;
}















