#include<bits/stdc++.h>
#define ll long long 
using namespace std ;
ll a[3*10000] ;
bool k[3*10000] ;
int main ()
{
	bool x = 0 ;
	ll n , t , point = 1 ;
	cin >> n >> t ;
	for ( ll i = 1 ; i < n ; i ++ )
	{
		cin >> a[i] ;
	}
	k[1] = 1 ;
	while ( point <= n - 1 )
	{
		point += a[point] ;
		k[point] = 1 ;
	}
	if ( k[t] == 1 )
	{
		cout << "YES" ;
	}
	else
	{
		cout << "NO" ;
	}
}

