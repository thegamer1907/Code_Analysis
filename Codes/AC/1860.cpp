// Created by : nilesh2797

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef std::vector<ll> vi;
typedef std::vector<std::vector<ll> > vvi;
typedef std::pair<ll, ll> ii;
typedef std::vector<ii> vii;

// #define inchar          getchar_unlocked
// #define outchar(x)      putchar_unlocked(x)
// #define FIO

// template<typename T> void inpos(T &x){x=0;register T c=inchar();while(((c<48)||(c>57))&&(c!='-'))c=inchar();bool neg=false;if(c=='-')neg=true;for(;c<48||c>57;c=inchar());for(;c>47&&c<58;c=inchar())x=(x<<3)+(x<<1)+(c&15);if(neg)x=-x;}
// template<typename T> void outpos(T n){if(n<0){outchar('-');n*=-1;}char snum[65];ll i=0;do {snum[i++]=n%10+'0';n/=10;}while(n);i=i-1;while(i>=0)outchar(snum[i--]);outchar('\n');}

// some templates from tensor
#define pb push_back
#define mset(a, b) memset(a, b, sizeof a)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1 << (x))
#define bitl(x) (1LL << (x))
#define sqr(x) ((x) * (x))
#define sz(x) ((ll)(x.size()))
#define cnti(x) (__builtin_popcount(x)) //number of set bits in x
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x)) //position of leftmost bit from left 0 based indexing
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x)) //position of rightmost bit from right 0 based indexing
#define ctzl(x) (__builtin_ctzll(x))
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
 
#define X first
#define Y second
#define INF 2E9
 
#define prll(x) cout << #x << " = " << x << endl
#define prllv(x) cout << #x << " : "; rep(i, 0, sz(x)) cout << i << "[" << x[i] << "]" << ", "; cout << endl
#define mod 1000000007
#ifndef FIO
#define read(a) rep(i, 0, sz(a)) cin >> a[i]
#else
#define read(a) rep(i, 0, sz(a)) inpos(a[i]);
#endif

const ll LIM = 1000010; // array size limit

ll n, m, k;
ll check(ll x)
{
	ll sum = 0;
	rep(i, 1, n+1)
		sum += min((x/i), m);
	return sum;
}

int main()
{
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m >> k;
	ll lo = 0, hi = n*m;
	while(hi-lo > 1)
	{
		ll mid = lo+(hi-lo)/2;
		if(check(mid) >= k)
			hi = mid;
		else
			lo = mid;
	} 
	cout << hi << endl;
}