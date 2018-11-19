#include <algorithm>
#include <string.h>
#include <stdio.h>
using	 namespace std;

int h,m,s,t1,t2;
bool mark[12];

int main() {
	
	scanf( "%d%d%d%d%d" , &h , &m , &s , &t1 , &t2 );
	t1 %= 12;
	t2 %= 12;
	h %= 12;
	
	if( t1 == t2 ) {
		puts( "YES" );
		return 0;
	}
	
	mark[h] = true;
	mark[m/5] = true;
	mark[s/5] = true;
	
	bool res1 = true;
	if( t1 < t2 ) {
		for( int i = t1 ; i < t2 ; i++ )
			if( mark[i] )
				res1 = false;
	}
	else {
		for( int i = t1 ; i < 12 ; i++ )
			if( mark[i] )
				res1 = false;
		for( int i = 0 ; i < t2 ; i++ )
			if( mark[i] )
				res1 = false;
	}
	
	bool res2 = true;
	swap( t1 , t2 );
	if( t1 < t2 ) {
		for( int i = t1 ; i < t2 ; i++ )
			if( mark[i] )
				res2 = false;
	}
	else {
		for( int i = t1 ; i < 12 ; i++ )
			if( mark[i] )
				res2 = false;
		for( int i = 0 ; i < t2 ; i++ )
			if( mark[i] )
				res2 = false;
	} 
	
	if( res1 || res2 )
		puts( "YES" );
	else
		puts( "NO" );
	
}