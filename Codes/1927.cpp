#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const ll N = 3 * 1e5 ;
ll ans , n , k , a[N] ;
map < ll , vector < ll > > acc ;
int main ()
{
	cin >> n >> k ; 
	for ( ll i = 1 ; i <= n ; i ++ ){ 
		cin >> a[i] ;
		acc[a[i]].push_back(i) ; 
	}
	for ( ll i = 2 ; i < n ; i ++ ){
		if ( a[i] % k ) continue ;
		ll y = a[i] / k ;
		ll l = lower_bound ( acc[y].begin() , acc[y].end() , i ) - acc[y].begin() + 1 ;
		l -- ;
		y = a[i] * k ;
		ll r = upper_bound ( acc[y].begin() , acc[y].end() , i ) - acc[y].begin() + 1 ; if ( r > acc[y].size() ) continue ;
		r = acc[y].size() - r + 1 ;
		
		ans += ( l * r ) ;
	}
	cout << ans ;
}

