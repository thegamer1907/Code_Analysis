#include<bits/stdc++.h>
using namespace std ;

const int N = 1e6 + 2 ;
const int INF = 1e9 + 7 ;

int h , m , s , t1 , t2 ;

bool C() {
	for( int t = t1 ; ; t = ( t + 1 )%12 ) {
		if( t == s || t == m || t == h ) return false ;
		if( t == ( t2 + 11 )%12 ) return true ;
	}
}

bool Cr() {
	for( int t = t2 ;  ; t = ( t + 1 )%12 ) {
		if( t == s || t == m || t == h ) return false ;
		if( t == ( t1 + 11 )%12 ) return true ;
	}
}

int main() {
	cin >> h >> m >> s >> t1 >> t2 ;
	m = m/5 ;
	s = s/5 ;
	h = h%12 ;
	t1 = t1%12 ;
	t2 = t2%12 ;
	if( t1 > t2 ) swap( t1 , t2 ) ;
	if( C() || Cr() ) cout << "YES" ;
	else cout << "NO" ;
	
	return 0 ;
}
