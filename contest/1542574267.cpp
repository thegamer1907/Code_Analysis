#include<bits/stdc++.h>
using namespace std ;

const int N = 1e6 + 2 ;
const int INF = 1e9 + 7 ;

int l[ 26 ] ;
int r[ 26 ] ;

int main() {
	int n ;
	char c1 , c2 ;
	char a , b ;
	cin >> c1 >> c2 >> n ;
	while( n -- ) {
		cin >> a >> b ;
		if( a == c1 && b == c2 ) {
			cout << "YES" ;
			return 0 ;
		}
		l[ a - 'a' ] = true ;
		r[ b - 'a' ] = true ;
	}
	if( r[ c1 - 'a' ] && l[ c2 - 'a' ] ) cout << "YES" ;
	else cout << "NO" ;
	
	return 0 ;
}
