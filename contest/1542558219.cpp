#define ONLINE_JUDGE
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3fLL
#define mod 1000000007
#define pb push_back
#define sq(x) ((x)*(x))
#define sz(a) ((int)a.size())
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
typedef pair<INT, INT> PII;
typedef pair<pii, int> ppi;
typedef double DO;

template<typename T, typename U> inline void smin(T &a, U b) {if (a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if (a<b) a=b;}

template<class T>inline void gn(T &x) {char c, sg=0; while (c=getchar(), (c>'9' || c<'0') && c!='-');for((c=='-'?sg=1, c=getchar():0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';if (sg) x=-x;}
template<class T>inline void print(T x) {if (x<0) {putchar('-');return print(-x);}if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}
int power(int a, int b, int m, int ans=1) {
	for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;
	return ans;
}

#if ( ( _WIN32 || __WIN32__ ) && __cplusplus < 201103L)
    #define lld "%I64d"
#else
    #define lld "%lld"
#endif

int flag[111], cnt[4];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
	int _time=clock();
#endif
	int n, k;
	cin>>n>>k;
	
	for(int i=0; i<n; i++) {
		int val=0;
		for(int j=0, u; j<k; j++) {
			scanf("%d", &u);
			if(u) val+=(1<<j);
		}
			flag[val]=1;
	}
	if(flag[0]) return puts("YES");
	
	for(int i=1; i<1<<(1<<k); i++) {
		int ok=1;
		for(int j=0; j<1<<k; j++) if(bit(i, j) && flag[j]==0) ok=0;		
		if(ok==0) continue;
		for(int j=0; j<k; j++) cnt[j]=0;
		for(int j=0; j<1<<k; j++) if(bit(i, j)) {
			for(int p=0; p<k; p++) if(bit(j, p)) cnt[p]++;
		}
		int gas=bpt(i), f=0;
		for(int j=0; j<k; j++) if(cnt[j]>gas/2) f=1;
		if(f) continue;
		return puts("YES");
	}
	puts("NO");
	

#ifndef ONLINE_JUDGE
	cerr<<(int)(clock()-_time)<<endl;
#endif
	return 0;
}
                                