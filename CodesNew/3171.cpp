#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int main ()
{
	ll n , k , l = 1 , r = 1 , maxx = 0 ; cin >> n >> k ; int a[n+1] , dp[n+1] ; dp[0] = 0 ;
	for ( ll i = 1 ; i <= n ; i ++ ) cin >> a[i] ; 
	for ( ll i = 1 ; i <= n ; i ++ ) dp[i] = dp[i-1] + 1 - a[i] ;
	for ( ll i = 1 ; r <= n ; i ++ ){
		if ( k >= dp[r] - dp[l-1] ) { maxx = max ( maxx , r - l + 1 ) ; r ++ ; }
		else l ++ ;
	}
	l = 1 , r = 1 ;
	cout << maxx << endl ;
	for ( ll i = 1 ; r <= n ; i ++ ){
		if ( k >= dp[r] - dp[l-1] ) { 
			if ( maxx == r - l + 1 ) { 
				for ( ll i = l ; i <= r ; i ++ ) a[i] = 1 ;
				for ( ll i = 1 ; i <= n ; i ++ ) cout << a[i] << " " ;
				return 0 ;
			} 
			r ++ ;
		}
		else l ++ ;
	}
}
