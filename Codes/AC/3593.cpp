#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define F first 
#define S second
const ll N = 2 * 1e5 + 1e3 ;
ll n , m , k , x , s , ans = 1e18 , now , b[N] , c[N] ;
pair < ll , ll > a[N] ;
int main ()
{
	cin >> n >> m >> k >> x >> s ;
	ans = n * x ; 
	for ( ll i = 1 ; i <= m ; i ++ ) cin >> a[i].S ; 
	for ( ll i = 1 ; i <= m ; i ++ ) cin >> a[i].F ;
	for ( ll i = 1 ; i <= k ; i ++ ) cin >> c[i] ; 
	for ( ll i = 1 ; i <= k ; i ++ ) cin >> b[i] ; 
	for ( ll i = 1 ; i <= m ; i ++ ){
		ll price = a[i].F , timeeach = a[i].S ; 
		if ( price > s ) continue ;
		ll boom = upper_bound ( b + 1 , b + k + 1 , s - price ) - b ;
		boom -- ; 
		now = ( n - c[boom] ) * timeeach ;
		ans = min ( ans , now ) ;
	} 
	for ( ll i = 1 ; i <= k ; i ++ ) {
		if ( b[i] > s ) continue ;
		now = ( n - c[i] ) * x ; 
		ans = min ( ans , now ) ;
	}
	cout << ans ;
}
