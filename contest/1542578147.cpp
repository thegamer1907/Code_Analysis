#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string>
#define  maxl	   17
#define  maxn	   203
using	 namespace std;

int n,m;
string str;
string bas[maxn];
string son[maxn];
int ans[maxn];
bool var[(1<<(maxl+1))][maxn];

void update( int id , int root , int index , int pos ) {
	// printf( "%d %d\n" , id , pos );
	var[pos][id] = true;
	if( index == str.length() || index == root + maxl )
		return;
	if( str.at(index) == '0' )
		update( id , root , index + 1 , pos * 2 );
	else
		update( id , root , index + 1 , pos * 2 + 1 );
}

bool check( int id , int bsmk ) {
	bool ok = true;
	int bas = ( 1 << bsmk );
	for( int i = bas ; ok && i < 2*bas ; i++ )
		if( !var[i][id] )
			ok = false;
	return ok;
}

int main() {
	
	// freopen( "input.txt" , "r" , stdin );
	
	scanf( "%d" , &n );
	for( int i = 1 ; i <= n ; i++ ) {
		cin >> str;
		int l1 = str.length();
		int l2 = min( l1 , maxl );
		bas[i] = str.substr( 0 , l2 );
		son[i] = str.substr( l1 - l2 , l2 );
		for( int j = 0 ; j < l1 ; j++ )
			update( i , j , j , 1 );
		for( int bsmk = maxl ; bsmk >= 1 ; bsmk-- )
			if( check( i , bsmk ) ) {
				ans[i] = bsmk;
				break;
			}
	}
	
	scanf( "%d" , &m );
	for( int q = 1 , a , b ; q <= m ; q++ ) {
		
		int l,l1,l2;
		scanf( "%d%d" , &a , &b );
		
		ans[n+q] = max( ans[a] , ans[b] );
		
		int head = 2 * ( 1 << ans[n+q] );
		for( int i = head ; i < ( 1 << (maxl+1) ) ; i++ )
			var[i][n+q] = ( var[i][a] || var[i][b] );
		
		str = bas[b];
		l = str.length();
		for( int i = 0 ; i < l ; i++ )
			update( n + q , i , i , 1 );
		
		str = son[a];
		l = str.length();
		for( int i = 0 ; i < l ; i++ )
			update( n + q , i , i , 1 );
		
		l1 = bas[a].length();
		l2 = bas[b].length();
		if( l1 + l2 <= maxl )
			bas[n+q] = bas[a] + bas[b];
		else
			bas[n+q] = bas[a] + bas[b].substr( 0 , maxl - l1 );
		str = bas[n+q];
		l = str.length();
		for( int i = 0 ; i < l ; i++ )
			update( n + q , i , i , 1 );
		
		l1 = son[a].length();
		l2 = son[b].length();
		if( l1 + l2 <= maxl )
			son[n+q] = son[a] + son[b];
		else {
			int diff = maxl - l2;
			son[n+q] = son[a].substr( l1 - diff , diff ) + son[b];
		}
		str = son[n+q];
		l = str.length();
		for( int i = 0 ; i < l ; i++ )
			update( n + q , i , i , 1 );
		
		l = son[a].length();
		for( int i = 0 ; i <= min( l , maxl ) ; i++ ) {
			str = son[a].substr( l - i , i ) + bas[b];
			int l2 = str.length();
			for( int j = 0 ; j < l2 ; j++ )
				update( n + q , j , j , 1 );
		}
		
		for( int i = maxl ; i > ans[n+q] ; i-- )
			if( check( n + q , i ) )
				ans[n+q] = i;
		
		printf( "%d\n" , ans[n+q] );
		
	}
	
}