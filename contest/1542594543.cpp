#include <algorithm>
#include <string.h>
#include <stdio.h>
using	 namespace std;

int n;
char pw[5];
char word[105][5];

int main() {
	
	scanf( "%s" , pw );
	scanf( "%d" , &n );
	for( int i = 0 ; i < n ; i++ )
		scanf( "%s" , word[i] );
	
	bool res = false;
	
	for( int i = 0 ; i < n ; i++ )
		if( pw[0] == word[i][0] && pw[1] == word[i][1] )
			res = true;
	
	for( int i = 0 ; i < n ; i++ )
		for( int j = 0 ; j < n ; j++ )
			if( pw[0] == word[i][1] && pw[1] == word[j][0] )
				res = true;
	
	if( res )
		puts( "YES" );
	else
		puts( "NO" );
	
}