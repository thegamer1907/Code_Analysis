#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cstdlib>
#include <string>
#include <complex>
#include <bitset>
#include <random>
#include <functional>
#include <deque>
#include <stack>
#include <ctime>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef pair<pii, int> piii;
typedef pair<pll, ll> plll;
typedef pair<pdd, double> pddd;
typedef complex<double> cpx;
#define mst(x,v) memset(x,v,sizeof(x))
#define rgs register
#define rp(k,x,v) for(rgs int k = x;k<v;++k)
#define rps(s) for(rgs int i = 0;s[i];++i)
#define RP(k,x,v) for(rgs int k = x;k<=v;++k)
#define lp(k,x,v) for(rgs int k = x;k>v;--k)
#define LP(k,x,v) for(rgs int k = x;k>=v;--k)
#define lowbit(x) (x&-x)
#define adde(u,v) edg[++ecnt]=Edge(u,v,g[u]),g[u]=ecnt
#define addew(u,v,w) edg[++ecnt]=Edge(u,v,g[u],w),g[u]=ecnt
#define addedg(u,v,w,cap) edg[++ecnt]=Edge(u,v,g[u],w,cap),g[u]=ecnt,edg[++ecnt]=Edge(v,u,g[v],-w,0),g[v]=ecnt
#define fson(x) for(rgs int i = g[x];~i;i=edg[i].next)
#define LB lower_bound
#define UB upper_bound
#define inp(n,a) RP(i,1,n) ru(a[i]);
#define mpt int mid = l+r>>1;
#define all(a) a.begin(),a.end()
#define inr (ql<=l && r<=qr)
#define upmax(a,b) (a = a>b?a:b)
#define upmin(a,b) (a = a<b?a:b)
#define coprime(a,b) ((a>b?a:b)%(a<b?a:b)!=0)
const int INF = 2e9;
const ll LINF = 1LL << 60;
const double inf = 1e15;
ll mod = 1e9 + 7;
char READ_DATA;
int SIGNAL_INPUT;
template <typename Type>
inline Type ru(Type &v)
{
	SIGNAL_INPUT = 1;
	while ((READ_DATA = getchar()) < '0' || READ_DATA > '9')
		if (READ_DATA == '-')
			SIGNAL_INPUT = -1;
		else if (READ_DATA == EOF)
			return EOF;
	v = READ_DATA - '0';
	while ((READ_DATA = getchar()) >= '0' && READ_DATA <= '9')
		v = v * 10 + READ_DATA - '0';
	v *= SIGNAL_INPUT;
	return v;
}
inline ll modru(ll &v)
{
	ll p = 0;
	SIGNAL_INPUT = 1;
	while ((READ_DATA = getchar()) < '0' || READ_DATA > '9')
		if (READ_DATA == '-')
			SIGNAL_INPUT = -1;
		else if (READ_DATA == EOF)
			return EOF;
	p = v = READ_DATA - '0';
	while ((READ_DATA = getchar()) >= '0' && READ_DATA <= '9')
	{
		v = (v * 10 + READ_DATA - '0') % mod;
		p = (p * 10 + READ_DATA - '0') % (mod - 1);
	}
	v *= SIGNAL_INPUT;
	return p;
}
template<typename A, typename B > inline char ru(A&x, B&y) { if (ru(x) == EOF) return EOF; ru(y); return 2; }
template<typename A, typename B, typename C>inline char ru(A&x, B&y, C&z) { if (ru(x) == EOF) return EOF; ru(y); ru(z); return 3; }
template<typename A, typename B, typename C, typename D>inline char ru(A&x, B&y, C&z, D&w) { if (ru(x) == EOF) return EOF; ru(y); ru(z); ru(w); return 4; }

struct Edge
{
	int  u, v, next;
	ll w, cap, flow;
	Edge(int _u = 0, int _v = 0, int nxt = -1, ll _w = 1, ll _cap = 0)
	{
		u = _u;
		v = _v;
		w = _w;
		cap = _cap;
		flow = 0;
		next = nxt;
	}

	int operator<(const Edge &b) const
	{
		return w < b.w;
	}
};

const int maxn = 3e5 + 3, N = 2e7, SZ = 21;
double eps = 1e-7, pi = acos(-1.0);
ll seed = 131, smod = (1LL << 32) - 267;

int b[N], k, ans;



int main()
{
	ru(k);
	RP(i, 1, 9) b[i] = i;
	RP(i, 10, N)
	{
		b[i] = b[i / 10] + b[i % 10];
		if (b[i] == 10)
		{
			--k;
			if (k==0)
			{
				ans = i;
				break;
			}
		}
	}

	cout << ans;
}