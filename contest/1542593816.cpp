#include <bits/stdc++.h>

using namespace std;
const int MAXN = 110;
int _w;

char x, y;
int n;
char a[MAXN], b[MAXN];

int main() {
	_w = scanf( " %c %c", &x, &y );
	_w = scanf( "%d", &n );
	for( int i = 0; i < n; ++i )
		_w = scanf( " %c %c", a+i, b+i );
	for( int i = 0; i < n; ++i )
		if( a[i] == x && b[i] == y )
			return puts("YES"), 0;
	for( int i = 0; i < n; ++i )
		for( int j = 0; j < n; ++j )
			if( b[i] == x && a[j] == y )
				return puts("YES"), 0;
	return puts("NO"), 0;
}
