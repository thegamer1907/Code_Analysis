#define ONLINE_JUDGE
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define MOD 1000000007
#define pb push_back
#define sq(x) ((x)*(x))
#define x first
#define y second
#define eps 1e-8
#define bpt(x) (__builtin_popcount(x))
#define bptl(x) (__builtin_popcountll(x))
#define bit(x, y) (((x)>>(y))&1)
#define bclz(x) (__builtin_clz(x))
#define bclzl(x) (__builtin_clzll(x))
#define bctz(x) (__builtin_ctz(x))
#define bctzl(x) (__builtin_ctzll(x))
#define PQ priority_queue<pii, vector<pii>, greater<pii> >

using namespace std;
typedef long long INT;
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef double DO;

template<typename T, typename U> inline void smin(T &a, U b) {if (a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if (a<b) a=b;}

template<class T>inline void gn(T &x) {char c, sg=0; while (c=getchar(), (c>'9' || c<'0') && c!='-');for((c=='-'?sg=1, c=getchar():0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';if (sg) x=-x;}
template<class T, class T1>inline void gn(T &x, T1 &y) {gn(x); gn(y);}
template<class T, class T1, class T2>inline void gn(T &x, T1 &y, T2 &z) {gn(x); gn(y); gn(z);}
template<class T>inline void print(T x) {if (x<0) {putchar('-');return print(-x);}if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}

int power(int a, int b, int m, int ans=1) {
	for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;
	return ans;
}

#ifndef ONLINE_JUDGE
void debug() {cout << endl;}
template<typename T, typename... Args>void debug(T&& head, Args&&... tail) {cout << head << ' ';debug(tail...);}
#endif

int cnt[16];

int solve(int k) {
	if (cnt[0]) return 1;
	int n=1<<k;
	for (int i=1; i<(1<<n); i++) {
		int ok=1, cc[4]={0, }, u=(1<<k)-1;
		for (int j=0; j<n && ok; j++) if (bit(i, j)) {
			if (!cnt[j]) ok=0;
			u&=j;
			for (int ii=0; ii<k; ii++) if (bit(j, ii)) cc[ii]++;
		}
		if (ok && !u) {
			int flag=1;
			for (int j=0; j<k && flag; j++) if (cc[j]>1) flag=0;
			if (flag) return 1;
		}
	}
	return 0;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	int n, k, u;
	cin>>n>>k;
	for (int i=0; i<n; i++) {
		int v=0;
		for (int j=0; j<k; j++) {
			scanf("%d", &u);
			if (u) v|=1<<j;
		}
		cnt[v]++;
	}

	puts(solve(k)?"YES":"NO");

	return 0;
}

                            