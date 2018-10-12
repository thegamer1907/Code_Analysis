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
#define rep(i, a, b) for(int i=a; i<b; i++)

using namespace std;
typedef long long INT;
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef double DO;

template<typename T, typename U> inline void smin(T &a, U b) {if (a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if (a<b) a=b;}

inline void getint(int &x) {char c; while (c=getchar(), c>'9' || c<'0'); for(x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';}
inline void print(int x) {if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}

inline void gn(long long&x){
	int sg=1;char c;while(((c=getchar())<'0'||c>'9')&&c!='-');c=='-'?(sg=-1,x=0):(x=c-'0');
	while((c=getchar())>='0'&&c<='9')x=x*10+c-'0';x*=sg;
}
inline void gn(int&x){long long t;gn(t);x=t;}
inline void gn(unsigned long long&x){long long t;gn(t);x=t;}
inline void gn(double&x){double t;scanf("%lf",&t);x=t;}
inline void gn(long double&x){double t;scanf("%lf",&t);x=t;}

int power(int a, int b, int m, int ans=1) {
	for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;
	return ans;
}

#define NN 1010

char s[NN];
int a[NN], b[NN], flag[NN];
map<string, int> mp;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	int n, m, na=0, nb=0, cnt=1;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) {
		scanf("%s", s);
		mp[s]=cnt;
		a[na++]=cnt++;
	}
	for(int i=0; i<m; i++) {
		scanf("%s", s);
		int u, ok=mp[s];
		if(ok) u=ok, flag[ok]=1;
		else u=cnt++;
		b[nb++]=u;
	}
	
	int nna=0, nnb=0;
	for(int i=0; i<na; i++) if(flag[a[i]]) nna++;
	for(int i=0; i<nb; i++) if(flag[b[i]]) nnb++;
	
	int mn=min(nna, nnb);
	int ka=mn/2, kb=(mn+1)/2;
	na-=ka, nb-=kb;
	
	if(na>nb) puts("YES");
	else puts("NO");
	
	return 0;
}
                             