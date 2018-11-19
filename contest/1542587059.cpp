#define ONLINE_JUDGE
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define INF 0x3f3f3f3f3f3f3f3fLL
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

using namespace std;
typedef long long INT;
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef double DO;

template<typename T, typename U> inline void smin(T &a, U b) {if (a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if (a<b) a=b;}

template<typename T> inline void gn(T &x) {char c, sg=0; while (c=getchar(), (c>'9' || c<'0') && c!='-');for((c=='-'?sg=1, c=getchar():0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';if (sg) x=-x;}
template<typename T> inline void print(T x) {if (x<0) {putchar('-');return print(-x);}if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}
template<typename T> inline void println(T x) {print(x), putchar('\n');}
template<typename T> inline void printsp(T x) {print(x), putchar(' ');}

int power(int a, int b, int m, int ans=1) {
	for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;
	return ans;
}

#ifndef ONLINE_JUDGE
void debug() {cout << endl;}
template<typename T, typename... Args>void debug(T&& head, Args&&... tail) {cout << head << ' ';debug(tail...);}
#endif

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif
	
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	if(h==12) h=0;
	
	DO a[]={h*30+m*0.5+s*0.5/60, m*6+s*0.1, s*6.0};
	t1*=30;
	t2*=30;
	sort(a, a+3);
	
	int ok=0;
	if(a[0]<t1 && t1<a[1] && a[0]<t2 && t2<a[1]) ok=1;
	if(a[1]<t1 && t1<a[2] && a[1]<t2 && t2<a[2]) ok=1;
	if((a[0]>t1 || t1>a[2]) && (a[0]>t2 || t2>a[2])) ok=1;
	
	puts(ok ? "YES" : "NO");
	
	return 0;
}

    