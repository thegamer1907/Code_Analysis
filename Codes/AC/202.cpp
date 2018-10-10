#include <bits/stdc++.h>
using namespace std ;
int n , a , s , answer [1000009] ;
int main()
{
	scanf("%d",&n);
	for ( int i = 0 ; i < n ; i ++ )
	{
		scanf("%d",&a);
		for( int j = s ; j < s + a ; j ++ )	answer[j] = i + 1 ;
		s += a ;
	}
	scanf( "%d" , &n ) ;
	for( int i = 0 ; i <  n ; i ++ )
	{
		scanf( "%d" , &a ) ;
		printf( "%d\n" , answer[ a - 1 ] ) ;
	}
	return 0 ; 
}
