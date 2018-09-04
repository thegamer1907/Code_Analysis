#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int main ()
{
	ll n , k , ans = 0 ;
	cin >> n >> k ;
	for ( ll i = 0 ; k % 2 == 0 ; i++ ){
		if ( k % 2 == 1 ){
			break ;
		}
		ans ++ ;
		k /= 2 ;
	}	
	cout << ans + 1 ;
}
