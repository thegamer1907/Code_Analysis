#include <bits/stdc++.h>

#define x first
#define y second
#define eps 1e-8
#define pb push_back
#define mod 1000000007
#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3fLL
#define bit(x, y) (((x)>>(y))&1)
#define bctz(x) (__builtin_ctz(x))
#define bclz(x) (__builtin_clz(x))
#define bclzl(x) (__builtin_clzll(x))
#define bctzl(x) (__builtin_ctzll(x))
#define bpt(x) (__builtin_popcount(x))
#define bptl(x) (__builtin_popcountll(x))
#define PQ priority_queue<pii, vector<pii>, greater<pii> >

using namespace std;

typedef double DO;
typedef long long INT;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef vector<int> VI;

template<typename T, typename U> inline void smin(T &a, const U &b) {if(a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, const U &b) {if(a<b) a=b;}

template<typename T> inline void gn(T &x) {char c, sg=0; while (c=getchar(), (c>'9' || c<'0') && c!='-');for((c=='-'?sg=1, c=getchar():0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';if (sg) x=-x;}
template<class T, class T1>inline void gn(T &x, T1 &y) {gn(x); gn(y);}
template<class T, class T1, class T2>inline void gn(T &x, T1 &y, T2 &z) {gn(x); gn(y); gn(z);}
template<typename T> inline void print(T x) {if (x<0) {putchar('-');return print(-x);}if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}
template<typename T> inline void println(T x) {print(x), putchar('\n');}
template<typename T> inline void printsp(T x) {print(x), putchar(' ');}
template<class T, class T1> inline void print(T x, T1 y) {printsp(x), println(y);}
template<class T, class T1, class T2> inline void print(T x, T1 y, T2 z) {printsp(x), printsp(y), println(z);}

int power(int a, int b, int m, int ans=1) {
	for (; b; b>>=1, a=(INT)a*a%m) if (b&1) ans=(INT)ans*a%m;
	return ans;
}
#define NN 1000010
char s[NN];
int a[NN],f[NN],g[NN];
int dp[NN];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	int k;
	scanf("%d",&k);
	scanf("%s",s);
	int n=strlen(s);
	for(int i=1;i<=n;i++) a[i]=s[i-1]-'0';
	int st=0;
	int m=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			st++;
		}
		else{
			m++;
			f[m]=st;
			g[i]=m;
			st=0;
		}
	}
	INT ans=0;
	for(int i=1;i<=n;i++){
		if(k==0){
			if(a[i]==1){
				dp[i]=0;
			}
			else{
				dp[i]=dp[i-1]+1;
			}
			ans+=dp[i];
			continue;
		}
		if(a[i]==0) dp[i]=dp[i-1];
		else{
			int id=g[i];
			if(id-k<0) continue;
			dp[i]=f[id-k+1]+1;
		}
		ans+=dp[i];
	}
	printf("%I64d\n",ans);
	return 0;
}

              