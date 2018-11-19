//marico el que lo lea
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <stdlib.h>
#include <assert.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> ii;

void fastIO() {
	std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}

#define FOR(i,f,t) for(int i=f; i<(int)t; i++)
#define FORR(i,f,t) for(int i=f; i>(int)t; i--)
#define FORE(i,c) for(auto i = (c).begin(); i != (c).end(); i++)
#define pb push_back
#define all(obj) obj.begin(), obj.end()
#define ms(obj, val) memset(obj, val, sizeof(obj))
#define ms2(obj, val, sz) memset(obj, val, sizeof(obj[0])*sz)

#define fst first
#define snd second

template<typename T, typename U> inline void mnze(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void mxze(T &x, U y) { if(x < y) x = y; }

void _scan( int &x ) { scanf("%d",&x); }
void _scan( long long &x ) { scanf("%lld",&x); }
void _scan( double &x ) { scanf("%lf",&x); }
void _scan( char &x ) { scanf(" %c",&x); }
void _scan( char *x ) { scanf("%s",x); }
void scan() {}
template<typename T, typename... U>
void scan( T& head, U&... tail ) { _scan(head); scan(tail...);}

template<typename T> void _dbg(const char* sdbg, T h) { cerr<<sdbg<<"="<<h<<"\n"; }
template<typename T, typename... U> void _dbg(const char* sdbg, T h, U... t) {
	while(*sdbg != ',')cerr<<*sdbg++;
	cerr<<"="<<h<<","; _dbg(sdbg+1, t...);
}

#ifdef LOCAL
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define debugv(x) {{cerr <<#x <<" = "; FORE(_i, (x)) cerr <<*_i <<", "; cerr <<"\n"; }}
#define debuga(x, sz) {{cerr <<#x <<" = "; FOR(_i, 0, sz) cerr << x[_i] <<", "; cerr <<"\n"; }}
#else
#define debug(...) (__VA_ARGS__)
#define debugv(x)
#define debuga(x, sz)
#define cerr if(0)cout
#endif

///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////

const int MAXN = 2e5+5, MAXK = 21;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int a[MAXN], n, k;

ll cnt[MAXN];
ll cur;
inline ll comb2(ll x){return x*(x-1)/2;}
inline void add(int x){
	cur -= comb2(cnt[x]);
	cnt[x]++;
	cur += comb2(cnt[x]);
}
inline void remove(int x){
	cur -= comb2(cnt[x]);
	cnt[x]--;
	cur += comb2(cnt[x]);
}

ll dp[MAXK][MAXN];

inline void solve(int k, int l, int r, int x, int y);

void solve1(int k, int l, int r, int x, int y){
	if(l>r) return;
	ll jop = y;
	ll bst = INF;
	int i = (l+r)/2;
	FOR(j,i,max(i,x)) add(a[j]);
	FOR(j,max(i,x),y+1){
		add(a[j]);
		ll val = cur + dp[k-1][j+1];
		if(val < bst){
			bst = val;
			jop = j;
		}
	}
	dp[k][i] = bst;
	FOR(j,i,y+1) remove(a[j]);

	int nl=l, nr=i-1, nx=x, ny=jop;
	FOR(j,nr+1,nx) add(a[j]);
	solve(k,nl,nr,nx,ny);
	FOR(j,nr+1,nx) remove(a[j]);


	nl=i+1; nr=r; nx=jop; ny=y;
	FOR(j,nr+1,nx) add(a[j]);
	solve(k,nl,nr,nx,ny);
	FOR(j,nr+1,nx) remove(a[j]);
}

void solve2(int k, int l, int r, int x, int y){
	if(l>r) return;
	ll jop = y;
	ll bst = INF;
	int i = (l+r)/2;
	FOR(j,i,r+1) add(a[j]);
	FOR(j,x,y+1){
		add(a[j]);
		ll val = cur + dp[k-1][j+1];
		if(val < bst){
			bst = val;
			jop = j;
		}
	}
	dp[k][i] = bst;
	FOR(j,i,r+1) remove(a[j]);
	FOR(j,x,y+1) remove(a[j]);

	int nl=l, nr=i-1, nx=x, ny=jop;
	FOR(j,nr+1,r+1) add(a[j]);
	FOR(j,x,nx) add(a[j]);
	solve(k,nl,nr,nx,ny);
	FOR(j,nr+1,r+1) remove(a[j]);
	FOR(j,x,nx) remove(a[j]);


	nl=i+1; nr=r; nx=jop; ny=y;
	FOR(j,nr+1,r+1) add(a[j]);
	FOR(j,x,nx) add(a[j]);
	solve(k,nl,nr,nx,ny);
	FOR(j,nr+1,r+1) remove(a[j]);
	FOR(j,x,nx) remove(a[j]);
}
inline void solve(int k, int l, int r, int x, int y){
	if(r<x) solve2(k, l, r, x, y);
	else solve1(k, l, r, x, y);
}


int main(){
	scan(n, k);
	FOR(i,0,n){
		scan(a[i]);
	}
	FORR(i,n-1,-1){
		add(a[i]);
		dp[1][i] = cur;
	}
	ms(cnt,0);
	cur = 0;
	dp[1][n] = INF;
	FOR(ik, 2, k+1) solve(ik, 0, n-1, 0, n-1), dp[ik][n]=INF;

	printf("%lld", dp[k][0]);
}

