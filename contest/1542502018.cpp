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
int L, R;
inline void add(int x){
	cur += cnt[x];
	cnt[x]++;
}
inline void remove(int x){
	cnt[x]--;
	cur -= cnt[x];
}

void setL(int i){
	while(L<i) remove(a[L++]);
	while(L>i) add(a[--L]);
}

void setR(int i){
	while(R<i) add(a[R++]);
	while(R>i) remove(a[--R]);
}

ll dp[MAXK][MAXN];

void solve(int k, int l, int r, int x, int y){
	if(l>r) return;
	ll jop = y;
	ll bst = INF;
	int i = (l+r)/2;
	setL(i);
	setR(max(i,x));
	FOR(j,max(i,x),y+1){
		setR(j+1);
		ll val = cur + dp[k-1][j+1];
		if(val < bst){
			bst = val;
			jop = j;
		}
	}
	dp[k][i] = bst;
	solve(k,l,i-1,x,jop);
	solve(k,i+1,r,jop,y);
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
