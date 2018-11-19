#include <bits/stdc++.h>

using namespace std;
const int MAXN = 102;
const int MAXK = 10;
int _w;

int n, m;
char tmp[MAXN];
int len[MAXN<<1];
vector<int> pf[MAXN<<1], sf[MAXN<<1];
bool vis[MAXN<<1][MAXK+1][1<<MAXK];

void work( int sz, int k, bool *vis ) {
	if( k > sz ) return;
	int x = 0;
	for( int i = 0; i < k; ++i )
		x = (x << 1) | tmp[i];
	for( int i = 0; i+k <= sz; ++i ) {
		vis[x] = 1;
		x = (x << 1) | tmp[i+k];
		x &= (1<<k)-1;
	}
}
void copy( int k, bool *src, bool *dst ) {
	for( int i = 0; i < (1<<k); ++i )
		dst[i] |= src[i];
}
bool check( int k, bool *vis ) {
	for( int i = 0; i < (1<<k); ++i )
		if( !vis[i] ) return false;
	return true;
}

int main() {
	_w = scanf( "%d", &n );
	for( int i = 1; i <= n; ++i ) {
		_w = scanf( "%s", tmp );
		int sz = (int)strlen(tmp);
		for( int j = 0; j < sz; ++j )
			tmp[j] = tmp[j] == '0' ? 0 : 1;
		if( sz < MAXK ) {
			len[i] = sz;
			for( int j = 0; j < sz; ++j ) {
				pf[i].push_back( tmp[j] );
				sf[i].push_back( tmp[j] );
			}
		} else {
			len[i] = MAXK;
			for( int j = 0; j < MAXK; ++j )
				pf[i].push_back( tmp[j] );
			for( int j = sz-MAXK; j < sz; ++j )
				sf[i].push_back( tmp[j] );
		}
		for( int k = 1; k <= MAXK; ++k )
			work(sz, k, vis[i][k]);
	}
	_w = scanf( "%d", &m );
	for( int i = 1; i <= m; ++i ) {
		int a, b;
		_w = scanf( "%d%d", &a, &b );
		int sz = 0;
		for( int j = 0; j < len[a]; ++j )
			tmp[sz++] = (char)sf[a][j];
		for( int j = 0; j < len[b]; ++j )
			tmp[sz++] = (char)pf[b][j];
		for( int k = 1; k <= MAXK; ++k ) {
			work(sz, k, vis[n+i][k]);
			copy(k, vis[a][k], vis[n+i][k]);
			copy(k, vis[b][k], vis[n+i][k]);
		}
		len[n+i] = min( len[a] + len[b], MAXK );
		for( int j = 0; j < len[a]; ++j )
			pf[n+i].push_back( pf[a][j] );
		for( int j = 0; j < len[n+i] - len[a]; ++j )
			pf[n+i].push_back( pf[b][j] );
		for( int j = len[a]-(len[n+i]-len[b]); j < len[a]; ++j )
			sf[n+i].push_back( sf[a][j] );
		for( int j = 0; j < len[b]; ++j )
			sf[n+i].push_back( sf[b][j] );
		int ans = 0;
		for( int k = MAXK; k >= 1; --k )
			if( check(k, vis[n+i][k]) ) {
				ans = k;
				break;
			}
		printf( "%d\n", ans );
	}
	return 0;
}
