#include <bits/stdc++.h>

using namespace std;
int _w;

int h, m, s, t1, t2;
int a[13];

bool check( int s, int t ) {
	while( s != t ) {
		if( a[s] ) return false;
		++s;
		if( s == 13 ) s = 1;
	}
	return true;
}

int main() {
	_w = scanf( "%d%d%d%d%d", &h, &m, &s, &t1, &t2 );
	m /= 5, s /= 5;
	if( !m ) m = 12;
	if( !s ) s = 12;
	a[h] = a[m] = a[s] = 1;
	puts( check(t1, t2) || check(t2, t1) ? "YES" : "NO" );
	return 0;
}
