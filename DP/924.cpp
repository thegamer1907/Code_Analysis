/*#include <bits/stdc++.h>
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
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ara[100];
    int i,j,k,n=0,max,m,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&ara[i]);
        n+=ara[i];
    }
    max=0;
    for(i=0;i<t;i++){
        for(j=i;j<t;j++){
            m=n;
            for(k=i;k<=j;k++){
                if(ara[k]==1)m--;
                else if(ara[k]==0) m++;
            }
            if(max<m){
                max=m;
            }
        }
    }
    printf("%d",max);
    return 0;
}
