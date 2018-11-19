#include<cstdio>

#define For( i , _begin , _end ) \
for( int i = (_begin) , i##end = (_end) ; i <= (i##end) ; ++i )

#define FOR( i , _begin , _end ) \
for( register int i = (_begin) , i##end = (_end) ; i <= (i##end) ; ++i )



template < typename type >
inline type scanf( type& in ) {
	in = 0 ; char ch = getchar() ; type f = 1 ;
	for( ;ch> '9'||ch< '0';ch = getchar() )if( ch == '-' )f = -1 ;
	for( ;ch>='0'&&ch<='9';ch = getchar() )in = in * 10 + ch - '0' ;
	return in *= f ;
}

#define maxn 100020
int n ,k,full;

int Ai[maxn][5] ;
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
		bi[i] |= !scanf( Ai[i][j] ) << j - 1 ;
	
	V[0] = true ;
	FOR( i , 1 , n ) V[ bi[i] ] = true ;
	
	full = ( 1 << k ) - 1 ;
	
	if( chk() )puts( "YES" ) ;
	else puts( "NO" ) ;
	
	return 0 ;
}