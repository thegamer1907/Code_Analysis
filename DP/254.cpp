#include<bits/stdc++.h>
using namespace std ;
int a[1000] , b[1000] ;
int main ()
{
	int n , m , sum = 0 ;
	cin >> n ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		cin >> a[i] ;
	}
	cin >> m ;
	for ( int j = 0 ; j < m ; j ++ )
	{
		cin >> b[j] ;
	}
	sort ( a , a+n ) ;
	sort ( b , b + m ) ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		for ( int j = 0 ; j < m ; j ++ )
		{
			if ( abs(a[i] - b[j]) <= 1 && b[j]!= 0 )
			{
				sum ++ ;
				b[j] = 0 ;
				break ;
			}
		}
	}
	cout << sum ;
}
