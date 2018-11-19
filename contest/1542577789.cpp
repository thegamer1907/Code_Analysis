/*#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std ;

#define For( i , _begin , _end ) \
for( int i = (_begin) , i##end = (_end) ; i <= (i##end) ; ++i )
#define Lop( i , _begin , _end ) \
for( int i = (_begin) , i##end = (_end) ; i >= (i##end) ; --i )
#define Rep( i , _begin , _add ) \
for( int i = (_begin) ; i ; i = (_add) )
#define FOR( i , _begin , _end ) \
for( register int i = (_begin) , i##end = (_end) ; i <= (i##end) ; ++i )
#define LOP( i , _begin , _end ) \
for( register int i = (_begin) , i##end = (_end) ; i >= (i##end) ; --i )
#define REP( i , _begin , _add ) \
for( register int i = (_begin) ; i ; i = (_add) )

template < typename type >
inline type max( const type& x , const type& y ) { return x > y ? x : y ; }
template < typename type >
inline type min( const type& x , const type& y ) { return x < y ? x : y ; }
template < typename type >
inline bool chkmax( type& x , const type& y ) {
	return x >= y ? false : ( x = y , true ) ;
}
template < typename type >
inline bool chkmin( type& x , const type& y ) {
	return x <= y ? false : ( x = y , true ) ;
}

template < typename type >
inline type scanf( type& in ) {
	in = 0 ; char ch = getchar() ; type f = 1 ;
	for( ;ch> '9'||ch< '0';ch = getchar() )if( ch == '-' )f = -1 ;
	for( ;ch>='0'&&ch<='9';ch = getchar() )in = in * 10 + ch - '0' ;
	return in *= f ;
}

int h ;
int m ;
int s ;
int t1 ;
int t2 ;
int cnt ;

int bel[30] ;
double at[3] ;

inline void error() {
	puts( "NO" ) ; exit( 0 ) ;
}

inline int get( int x ) {
	if( x > 12 )x -= 12 ;
	if( !x )x = 12 ;
	return x ;
}

inline int chk( int x ) {
	if( x == 12 )x = 0 ;
	FOR( i , 0 , 2 ) if( at[i] - x > 0.0 && at[i] - x < 1.0 )
		return 1 ;
	FOR( i , 0 , 2 ) if( at[i] - x == 0.0 )
		return -1 ;
	return 0 ;
}

int main() {
	
	scanf( "%d%d%d%d%d" , &h , &m , &s , &t1 , &t2 ) ;
	
	at[0] = 0.5 * ( m + s != 0 ) + h ;
	at[1] = m / 5.0 ;
	at[2] = s / 5.0 ;
	
	if( at[0] - 12.0 > 0.0 )at[0] -= 12.0 ;
	
	int start = 0 ;
	FOR( i , 1 , 12 ) if( chk( i ) == 1 )
		{ start = get( i + 1 ) ; break ; }
	
	int begin = start ;
	do {
		++cnt ;
		while( !chk( start ) )bel[start] = cnt , start = get( start + 1 ) ;
		if( chk( start ) != -1 )bel[start] = cnt ;
		start = get( start + 1 ) ;
	} while( begin != start ) ;
	
	puts( bel[t1] == bel[t2] ? "YES" : "NO" ) ;
	
	return 0 ;
}*/
#include<cstdio>

#define For( i , _begin , _end ) \
for( int i = (_begin) , i##end = (_end) ; i <= (i##end) ; ++i )
#define Lop( i , _begin , _end ) \
for( int i = (_begin) , i##end = (_end) ; i >= (i##end) ; --i )
#define Rep( i , _begin , _add ) \
for( int i = (_begin) ; i ; i = (_add) )
#define FOR( i , _begin , _end ) \
for( register int i = (_begin) , i##end = (_end) ; i <= (i##end) ; ++i )
#define LOP( i , _begin , _end ) \
for( register int i = (_begin) , i##end = (_end) ; i >= (i##end) ; --i )
#define REP( i , _begin , _add ) \
for( register int i = (_begin) ; i ; i = (_add) )

template < typename type >
inline type max( const type& x , const type& y ) { return x > y ? x : y ; }
template < typename type >
inline type min( const type& x , const type& y ) { return x < y ? x : y ; }
template < typename type >
inline bool chkmax( type& x , const type& y ) {
	return x >= y ? false : ( x = y , true ) ;
}
template < typename type >
inline bool chkmin( type& x , const type& y ) {
	return x <= y ? false : ( x = y , true ) ;
}

template < typename type >
inline type scanf( type& in ) {
	in = 0 ; char ch = getchar() ; type f = 1 ;
	for( ;ch> '9'||ch< '0';ch = getchar() )if( ch == '-' )f = -1 ;
	for( ;ch>='0'&&ch<='9';ch = getchar() )in = in * 10 + ch - '0' ;
	return in *= f ;
}

static const int maxn = 1e5 + 19 ;

int n ;
int k ;
int full ;

int ai[maxn][5] ;
int bi[maxn] ;

bool V[maxn] ;

inline bool chk() {
	For( i , 1 , n )
		FOR( j , 0 , full )
			if( V[j] && ( (  bi[i] | j ) == full ) )return true ;
	return false ;
}

int main() {
	
	scanf( n ) ;scanf( k ) ;
	For( i , 1 , n ) FOR( j , 1 , k )
		bi[i] |= !scanf( ai[i][j] ) << j - 1 ;
	
	V[0] = true ;
	FOR( i , 1 , n ) V[ bi[i] ] = true ;
	
	full = ( 1 << k ) - 1 ;
	
	if( chk() )puts( "YES" ) ;
	else puts( "NO" ) ;
	
	return 0 ;
}