#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
ll a[100010] , l[100010] , r[100010] ;
int main ()
{
	string s ;
	cin >> s ;
	ll x = s.size() , m , ans = 0 ;
	a[0] = 0 ;
	for ( ll i = 1 ; i < x ; i ++ )
	{
		a[i] = 0 ;
		if ( s[i] == s[i-1] )
		{
			ans ++ ;	
		}
		a[i] = ans ;
	}
	cin >> m ;
	for ( ll i = 0 ; i < m ; i ++ )
	{
		cin >> l[i] >> r[i] ;
	}
	for ( ll i = 0 ; i < m ; i ++ )
	{
		ll left = l[i] - 1 , right = r[i] - 1 ;
		cout << a[right] - a[left] << '\n' ;
	}
}

