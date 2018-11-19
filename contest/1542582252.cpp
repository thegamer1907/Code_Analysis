# include <bits/stdc++.h>

int n ;
std :: string O, bark [105] ;

int main ( )  {
	std :: cin >> O >> n;
	for ( int i = 1 ; i <= n ; ++ i )  {
		std :: cin >> bark [i] ;
		if ( bark [i] == O )  {
			return puts ( "YES" ), 0 ;
		}
	}
	for ( int i = 1 ; i <= n ; ++ i )  {
		if ( bark [i] [0] == O [1] )  {
			for ( int j = 1 ; j <= n ; ++ j )  {
				if ( bark [j] [1] == O [0] )  {
					return puts ( "YES" ), 0 ;
				}
			}
		}
	}
	return puts ( "NO" ), 0 ;
}
