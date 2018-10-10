#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
ll n , m , k , l , r ;
int main () {
	cin >> n >> m ; 
	ll a[n+1][m+1] , up[n+1][m+1] , best[n+1] ; 
	for ( ll i = 1 ; i <= n ; i ++ ) best[i] = i ;
	for ( ll i = 1 ; i <= n ; i ++ ){
		for ( ll j = 1 ; j <= m ; j ++ ) {
			cin >> a[i][j] ;
			if ( a[i][j] >= a[i-1][j] ) up[i][j] = up[i-1][j] ;
			else up[i][j] = i ;
			best[i] = min ( up[i][j] , best[i] ) ; 
		}
	}
	cin >> k ;
	while ( k -- ){
		cin >> l >> r ; 
		if ( best[r] <= l ) cout << "Yes\n" ; 
		else cout << "No\n" ; 
	}
} 
