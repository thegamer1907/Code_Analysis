#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int main ()
{
	ll n , k , a = 0 , b = 0 , c = 0 , maxx = 1 ; string s ; cin >> n >> k >> s ;
	for ( ll i = 0 ; i < n ; i ++ ){
		if ( s[i] == 'a' ) a ++ ;
		else b ++ ;
		if ( min ( a , b ) <= k ) maxx = max ( maxx , a + b ) ;
		else {
			if ( s[c] == 'a' ) a -- ;
			else b -- ; 
			c ++ ;
		}
	}
	cout << maxx ;
}
