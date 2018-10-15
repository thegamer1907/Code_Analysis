#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;
const int MAXN = 200005;

int n, m; ll tot, c[MAXN];

inline void read( ll &x ){
	char ch;
	while( ch = (char)getchar(), ch < '0' || ch > '9' );
	x = ch - '0';
	while( ch = (char)getchar(), ch >= '0' && ch <= '9' )
		x = x * 10 + ch - '0';
}

int main(){
	scanf( "%d%d", &n, &m );
	for( int i = 1; i <= n; ++i ){
		ll x; read(x); c[i] = c[i-1] + x;
	}
	for( int i = 1; i <= m; ++i ){
		ll x; read(x); tot += x;
		if( tot >= c[n] ){
			printf( "%d\n", n );
			tot = 0;
		} else{
			int L = 0, R = n;
			while( L < R ){
				int M = ( L + R + 1 ) >> 1;
				if( tot >= c[M] ) L = M;
				else R = M - 1;
			}
			printf( "%d\n", n - L );
		}
	}
	return 0;
}
