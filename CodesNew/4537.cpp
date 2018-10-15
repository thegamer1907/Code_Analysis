#include<bits/stdc++.h>

#define x first
#define y second
#define pb push_back
#define inf 0x3f3f3f3f
#define mod 1000000007
#define sq(x) ((x)*(x))
#define PQ priority_queue<pii, vector<pii>, greater<pii> >

using namespace std;

typedef double DO;
typedef long long INT;
typedef pair<int, int> pii;
typedef pair<pii, int> pi3;
typedef vector<int> VI;

template<typename T, typename U> inline void smin(T &a, U b) {if (a>b) a=b;}
template<typename T, typename U> inline void smax(T &a, U b) {if (a<b) a=b;}
template<class T>inline void gn(T &x) {char c, sg=0; while (c=getchar(), (c>'9' || c<'0') && c!='-');for((c=='-'?sg=1, c=getchar():0), x=0; c>='0' && c<='9'; c=getchar()) x=(x<<1)+(x<<3)+c-'0';if (sg) x=-x;}
template<class T, class T1>inline void gn(T &x, T1 &y) {gn(x); gn(y);}
template<class T, class T1, class T2>inline void gn(T &x, T1 &y, T2 &z) {gn(x); gn(y); gn(z);}
template<class T>inline void print(T x) {if (x<0) {putchar('-');return print(-x);}if (x<10) {putchar('0'+x);return;} print(x/10);putchar(x%10+'0');}
template<class T>inline void printsp(T x) {print(x); putchar(' ');}
template<class T>inline void println(T x) {print(x); putchar('\n');}
template<class T, class U>inline void print(T x, U y) {printsp(x); println(y);}
template<class T, class U, class V>inline void print(T x, U y, V z) {printsp(x); printsp(y); println(z);}

int power(int a, int b, int m, int ans=1) {
	for (; b; b>>=1, a=1LL*a*a%m) if (b&1) ans=1LL*ans*a%m;
	return ans;
}
#define NN 555555
int a[NN], b[NN];
int flag[NN];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif
	int n;
	gn(n);
	for(int i=1; i<=n; i++) gn(a[i]);
	sort(a+1, a+n+1);
	
	int ans=0;
	int nn=0;
	for(int i=n/2+1; i<=n; i++)	b[nn++]=a[i];
	b[nn++]=inf;
	
	int pre=-1;
	for(int i=1; i<=n/2; i++){
		int k=lower_bound(b+pre+1, b+nn, a[i]*2)-b;
		if(b[k]==inf) break;
		ans++;
		pre=k;
	}
	
	println(n-ans);
}
                          