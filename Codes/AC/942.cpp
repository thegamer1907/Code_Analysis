#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int main ()
{
	ll n , k , maxx = 0 , x  , y ; string s ; cin >> n >> k >> s ;
	ll a[n+1] , b[n+1] ; a[0] = 0 ; b[0] = 0 ;
	for ( ll i = 1 ; i <= n ; i ++ ){
		a[i] = a[i-1] + ( s[i-1] == 'a' ) ;
		b[i] = b[i-1] + ( s[i-1] == 'b' ) ;
	}
	ll l = 1 , r = 1 ; 
	for ( ll i = 1 ; r <= n and l <= n ; i ++ ){
		if ( a[r] - a[l-1] <= k and r <= n and l <= n ) { maxx = max ( maxx , r - l + 1 ) ; r ++ ; }
		else l ++ ;
	}
	l = 1 , r = 1 ; 
	for ( ll i = 1 ; r <= n and l <= n ; i ++ ){
		if ( b[r] - b[l-1] <= k and r <= n and l <= n ) { maxx = max ( maxx , r - l + 1 ) ; r ++ ; }
		else l ++ ;
	}
	cout << maxx ;
}
