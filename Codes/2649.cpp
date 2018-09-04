#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
string s ;
ll hash[1001101] , n , mod = 1e9+7 , pali[1001101] ;
ll h ( ll a , ll b ) {
	return ( hash[b] - ( ( hash[a-1] * pali[b-a+1] ) % mod ) + mod ) % mod ;
}
int main ()
{
	ios::sync_with_stdio(false) ; cin.tie() ; cout.tie() ;
	pali[0] = 1 ;
	for ( ll i = 1 ; i <= 1001100 ; i ++ ) pali[i] = ( pali[i-1] * 727 ) % mod ;
	cin >> s ; n = s.size() ;
	hash[1] = s[0] - 'a' ;
	for ( ll i = 2 ; i <= n ; i ++ )
		hash[i] = ( ( hash[i-1] * 727 ) + s[i-1] - 'a' ) % mod ;
	for ( ll i = n - 2 ; i >= 1 ; i -- ){
		if ( hash[i] != h ( n - i + 1 , n ) ) continue ;
		for ( ll j = 2 ; j + i - 1 < n ; j ++ ){
			if ( h ( j , j + i - 1 ) == hash[i] ) {
				for ( ll o = 0 ; o < i ; o ++ ) cout << s[o] ;
				return 0 ;
			}
		}	
	}
	cout << "Just a legend" ;
}
