#include <bits/stdc++.h>
using namespace std ;
const int N = 1e5 + 10 ;
int n , k , s , e , l , r , cnt , help , answer , ans , dp[N] , nxt[N] ;
string str ;
char c ;
bool check ( int s , int e )
{
	int len = e - s + 1 ;
	if ( !s )	cnt = dp[e] ;
	else cnt = dp[e] - dp[s - 1 ] ;
	return ( k >= cnt || k >= len - cnt ) ;
}
int main()
{
	cin >> n >> k >> str ;
	c = str[0] ;
	dp[0] = ( str[0] == 'a' ) ;
	for( int i = 0 ; i < n ; i ++ )
	{
		dp[i] = dp[i - 1 ] + ( str[i] == 'a' ) ;
	}
	for( int i = 0 ; i < n ; i ++ )
	{
		l = i - 1 , r = n ;
		ans = 0 ;
		while ( l < r )
		{
			help = ( l + r ) / 2 ;
			if ( check ( i , help ) )
			{
				if ( ans == help - i + 1 )	break ;
				ans = help - i + 1 ;
				l = help ;
			}
			else	r = help ;
		}
		answer = max ( answer , ans ) ;
	}
	cout << answer ;
	return 0 ; 
}
