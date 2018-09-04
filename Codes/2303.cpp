#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
ll n , a[10001111] , m , l , r , x , dp[10001111] , N = 1 ; 
bool mark[10001111] ;
map < ll , ll > num ;
int main ()
{
	ios::sync_with_stdio(false);cin.tie();cout.tie();
	cin >> n ;
	for ( ll i = 1 ; i <= n ; i ++ ) { cin >> x ; a[x] ++ ; N = max ( N , x ) ; }
	for ( ll i = 2 ; i <= N ; i ++ ){
		if ( mark[i] ) continue ;
		for ( ll j = i ; j <= N ; j += i ){
			dp[i] += a[j] ; mark[j] = 1 ;
		}
	}
	for ( ll i = 1 ; i <= 10001110 ; i ++ ) dp[i] += dp[i-1] ;
	cin >> m ;
	while ( m -- ){ cin >> l >> r ; cout << dp [ min ( r , N ) ] - dp[ min ( l-1 , N ) ] << endl ; }
}
