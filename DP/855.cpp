#include<bits/stdc++.h>
#define ll long long 
#define dou double
using namespace std ;
ll a[100010] ;
int main ()
{
	ll n , t = 0 , x = 0 ;
	cin >> n ;
	for ( ll i = 1 ; i <= n ; i ++ )
	{
		cin >> a[i] ;
		if ( a[i] == 1 )
		{
			t ++ ;
		}
	}
	for ( ll i = 1 ; i <= n ; i ++ )                /// 1 0 0 1 ///
	{
		ll k = 0 ;
		for ( ll j = i ; j <= n ; j ++ )
		{
			if ( a[j] == 0 )
			{
				k ++ ;
			}
			else
			{
				k -- ;
			}
			x = max ( x , t + k ) ;
		}
	}
	cout << x ;
}
