#include <algorithm>
#include <string.h>
#include <stdio.h>
#define  maxn	   100003
using	 namespace std;

int n,k;
int pw[17];
int cnt[16];
int ar[maxn][4];

int main() {
	
	scanf( "%d%d" , &n , &k );
	for( int i = 1 ; i <= n ; i++ )
		for( int j = 0 ; j < k ; j++ )
			scanf( "%d" , &ar[i][j] );
	
	for( int i = 1 ; i <= n ; i++ ) {
		int val = 0;
		for( int j = 0 ; j < k ; j++ )
			if( ar[i][j] )
				val |= (1<<j);
		cnt[val]++;
	}
	
	int MAX = 2;
	pw[0] = 1;
	for( int i = 1 ; i <= (1<<k) ; i++ )
		pw[i] = pw[i-1] * MAX;
	
	bool res = false;
	
	// printf( "%d\n" , pw[(1<<k)] * (1<<k) * k );
	
	for( int bmask = 1 ; !res && bmask < pw[(1<<k)] ; bmask++ ) {
		
		int cnt2[(1<<k)];
		memset( cnt2 , 0 , sizeof(cnt2) );
		
		int cnt3[k];
		memset( cnt3 , 0 , sizeof(cnt3) );
		
		int N = 0;
		int cpy = bmask;
		bool ok = true;
		
		for( int i = (1<<k) - 1 ; ok && i >= 0 ; i-- ) {
			int tmp = cpy / pw[i];
			if( cnt[i] < tmp )
				ok = false;
			else {
				N += tmp;
				cnt2[i] = tmp;
				for( int j = 0 ; j < k ; j++ )
					if( i & (1<<j) )
						cnt3[j] += tmp;
				cpy -= tmp * pw[i];
			}
		}
		
		if( !ok )
			continue;
		
		for( int i = 0 ; i < k ; i++ )
			if( cnt3[i] > N / 2 )
				ok = false;
		
		res = ok;
		
	}
	
	if( res )
		puts( "YES" );
	else
		puts( "NO" );
	
}