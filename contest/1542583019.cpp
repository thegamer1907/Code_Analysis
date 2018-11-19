#include <bits/stdc++.h>

using namespace std;
const int MAXN = 100010;
const int MAXK = 4;
int _w;

int n, k, know[4], a[1<<MAXK];

int popcnt( int x ) {
	int cnt = 0;
	while(x) {
		cnt += (x & 1);
		x >>= 1;
	}
	return cnt;
}

int main() {
	_w = scanf( "%d%d", &n, &k );
	for( int i = 0; i < n; ++i ) {
		int x = 0;
		for( int j = 0; j < k; ++j ) {
			int y;
			_w = scanf( "%d", &y );
			know[j] += y;
			x = (x << 1) | y;
		}
		a[x] = 1;
	}
	for( int i = 0; i < k; ++i )
		if( know[i] == n )
			return puts("NO"), 0;
	if( a[0] ) return puts("YES"), 0;
	if( k == 1 || k == 2 ) {
		return puts("YES"), 0;
	} else if( k == 3 ) {
		for( int i = 0; i < (1<<k); ++i )
			if( a[i] && popcnt(i) == 1 )
				return puts("YES"), 0;
	} else {
		for( int i = 0; i < (1<<k); ++i )
			if( a[i] ) {
				if( popcnt(i) == 1 )
					return puts("YES"), 0;
				if( popcnt(i) == 2 && a[(~i)&15] )
					return puts("YES"), 0;
			}
	}
	return puts("NO"), 0;
}
