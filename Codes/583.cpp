#include <bits/stdc++.h>
using namespace std ;
int answer , k , q , value , p ;
bool check ( int a )
{
	value = 0 ;
	for(int i = 0 ; i < 10 ; i ++ )
	{
		p = pow( 10 , i ) ;
		value += ( a / p ) % 10 ;
		if ( value > 10 )	return false ;
	}
	return ( value == 10 ) ;
}
int main()
{
	cin >> k ;
	for( int i = 1 ; i == i ; i ++ )
	{
		if ( check (i) )	q ++ ;
		if ( q == k )
		{
			return cout << i , 0 ;
		}
	}
	return 0 ;
}
