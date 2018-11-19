#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define LD long double
#define SC(t,x) static_cast<t>(x)
#define AR(t) vector < t >
#define PII pair < int, int >
#define PLL pair < LL, LL >
#define PIL pair < int, LL >
#define PLI pair < LL, int >
#define MP make_pair
#define PB push_back
#define PF push_front
#define POB pop_back
#define POF pop_front
#define PRF first
#define PRS second
#define INIT(ar,val) memset ( ar, val, sizeof ( ar ) )
#define lp(loop,start,end) for ( int loop = start; loop < end; ++loop )
#define lpd(loop,start,end) for ( int loop = start; loop > end; --loop )
#define lpi(loop,start,end) for ( int loop = start; loop <= end; ++loop )
#define lpdi(loop,start,end) for ( int loop = start; loop >= end; --loop )
#define qmax(a,b) (((a)>(b))?(a):(b))
#define qmin(a,b) (((a)<(b))?(a):(b))
#define qabs(a) (((a)>=0)?(a):(-(a)))

const int INF = 0x3fffffff;
const int SINF = 0x7fffffff;
const long long LINF = 0x3fffffffffffffff;
const long long SLINF = 0x7fffffffffffffff;
const int MAXN = 53;

struct eT
{
	void setd ( int _u, int _v, int _l )
	{
		u = _u, v = _v, last = _l;
	}

	int u, v, last;
}edge[MAXN*2];

int n, m;
int pls;
int ke, la[MAXN];
int dist[MAXN][MAXN];
int dp[MAXN][MAXN];
int ohv[MAXN];
int vc[MAXN];
int chv[MAXN];
int deg[MAXN];
bool lf[MAXN];
int cd[MAXN];
int bs[MAXN], ts[MAXN];

void init ();
void input ();
void work ();

void dfs ( int now, int fa, int nc );



int main ()
{
	init ();
	input ();
	work ();
}



void init ()
{
	// Init Everything Here

	ios::sync_with_stdio ( false );
}

void input ()
{
	// input method

	scanf ( "%d", &n );
	int u, v, w;
	INIT ( dist, 0x3f3f3f3f );
	ke = 0;
	INIT ( la, -1 );
	lp ( i, 1, n ) {
		scanf ( "%d%d%d", &u, &v, &w );
		edge[ke].setd ( u, v, la[u] );
		la[u] = ke++;
		edge[ke].setd ( v, u, la[v] );
		la[v] = ke++;
		dist[u][v] = dist[v][u] = w;
		++deg[u], ++deg[v];
	}
	scanf ( "%d", &pls );
	scanf ( "%d", &m );
	int x;
	lpi ( i, 1, m ) {
		scanf ( "%d", &x );
		++ohv[x];
	}
}

void work ()
{
	// main work

	int kcc = 0;
	for ( int i = la[pls]; ~i; i = edge[i].last ) dfs ( edge[i].v, pls, ++kcc );

	lpi ( i, 1, n ) dist[i][i] = 0;
	lpi ( k, 1, n ) lpi ( i, 1, n ) lpi ( j, 1, n ) dist[i][j] = qmin ( dist[i][j], dist[i][k] + dist[k][j] );

	lpi ( i, 1, n ) if ( deg[i] == 1 ) lf[i] = true;

	int l, r, mid, nv, tc, tar;
	lpi ( i, 1, m ) {
		lpi ( j, 1, n ) {
			if ( !lf[j] ) continue;
			dp[j][i] = 0;
			lpi ( k, 1, n ) {
				if ( !lf[k] ) continue;
				if ( j ^ k ) {
					l = 1, r = i;
					while ( l < r ) {
						mid = ( l + r ) >> 1;
						nv = dp[k][i-mid] + dist[j][k];

						tc = 0;
						lpi ( a, 1, n ) {
							if ( ( a ^ j ) && ( a ^ k ) && lf[a] ) {
								tar = nv - dist[j][a];
								if ( dp[a][i-1] >= tar ) {
									tc += i - ( lower_bound ( dp[a], dp[a]+i, tar ) - dp[a] );
								}
							}
						}

						if ( tc >= i - mid ) r = mid;
						else l = mid + 1;
					}
					dp[j][i] = qmax ( dp[j][i], dp[k][i-l] + dist[j][k] );
				}
			}
		}
	}

	int ans = 0;
	bool flag;
	lpi ( i, 1, n ) {
		if ( lf[i] && chv[vc[i]] ) {
			l = 1, r = chv[vc[i]] + 1;
			while ( l < r ) {
				mid = ( l + r ) >> 1;
				nv = dp[i][m - mid] + dist[pls][i];

				memcpy ( ts, chv, sizeof ( chv ) );
				ts[vc[i]] -= mid;
				lpi ( j, 1, n ) {
					if ( ( j ^ pls ) && ( j ^ i ) && lf[j] ) {
						tar = nv - dist[pls][j];
						if ( dp[j][m - 1] >= tar ) ts[vc[j]] -= m - ( lower_bound ( dp[j], dp[j] + m, tar ) - dp[j] );
					}
				}

				flag = true;
				lpi ( j, 1, kcc ) {
					if ( ts[j] > 0 ) {
						flag = false;
						break;
					}
				}

				if ( flag ) r = mid;
				else l = mid + 1;
			}
			if ( l <= chv[vc[i]] ) ans = qmax ( ans, dp[i][m - l] + dist[pls][i] );
		}
	}

	cout << ans << endl;
}



void dfs ( int now, int fa, int nc )
{
	vc[now] = nc;
	chv[nc] += ohv[now];

	for ( int i = la[now]; ~i; i = edge[i].last ) if ( edge[i].v ^ fa ) dfs ( edge[i].v, now, nc );
}