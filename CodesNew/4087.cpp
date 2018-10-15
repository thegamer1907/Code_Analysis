#include<bits/stdc++.h>

#define x first
#define y second
#define eps 1e-7
#define pb push_back
#define inf 0x3f3f3f3f
#define mod 1000000007
#define sq(x) ((x)*(x))
#define cb(x) ((x)*(x)*(x))
#define bit(x, y) (((x)>>(y))&1)
#define bctz(x) (__builtin_ctz(x))
#define bclz(x) (__builtin_clz(x))
#define bclzl(x) (__builtin_clzl(x))
#define bctzl(x) (__builtin_ctzl(x))
#define bpt(x) (__builtin_popcount(x))
#define bptl(x) (__builtin_popcountll(x))
#define pi 3.1415926535897932384626433832795
#define PQ priority_queue<pii, vector<pii>, greater<pii> >

using namespace std;

typedef double DO;
typedef long long INT;
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;

template<typename T, typename U> inline void smin(T &a, U b) {if(a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if(a<b) a=b;}

template <class T> inline void gn(T &x) {char c, sg=0; while(c=getchar(), (c>'9' || c<'0') && c!='-'); for((c=='-' ? sg=1, c=getchar() : 0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0'; if(sg) x=-x;}
template <class T1, class T2> inline void gn(T1 &x1, T2 &x2) {gn(x1), gn(x2);}
template <class T1, class T2, class T3> inline void gn(T1 &x1, T2 &x2, T3 &x3) {gn(x1, x2), gn(x3);}
template <class T1, class T2, class T3, class T4> inline void gn(T1 &x1, T2 &x2, T3 &x3, T4 &x4) {gn(x1, x2), gn(x3, x4);}

template <class T> inline void print(T x) {if(x<0) {putchar('-'); return print(-x);} if(x<10) {putchar('0'+x); return ;} print(x/10); putchar(x%10+'0');}
template <class T> inline void println(T x) {print(x); putchar('\n');}
template <class T> inline void printsp(T x) {print(x); putchar(' ');}
template <class T1, class T2> inline void print(T1 x1, T2 x2) {printsp(x1), println(x2);}
template <class T1, class T2, class T3> inline void print(T1 x1, T2 x2, T3 x3) {printsp(x1), printsp(x2), println(x3);}
template <class T1, class T2, class T3, class T4> inline void print(T1 x1, T2 x2, T3 x3, T4 x4) {printsp(x1), printsp(x2), printsp(x3), println(x4);}

int power(int a, int b, int m, int ans=1) {
	for(; b; b>>=1, a=1LL*a*a%m) if(b&1) ans=1LL*ans*a%m;
	return ans;
}

#define NN 200010

INT a[NN], dp[NN];

int main() {
#ifndef	ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	int n, q;
	gn(n, q);
	for(int i=1; i<=n; i++) {
		gn(a[i]);
		dp[i]=dp[i-1]+a[i];
	}
	
	INT sum=0, x;
	while(q--) {
		gn(x);
		sum+=x;
		
		if(sum>=dp[n]) {
			sum=0;
			println(n);
			continue;
		}
		
		int id=upper_bound(dp+1, dp+n+1, sum)-dp-1;
		println(n-id);
	}
}
             