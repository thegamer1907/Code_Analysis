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
#define rands(n) (rand()%n+1)
#define rand0(n) (rands(n)-1)
#define Rands(n) ((INT)rand()*rand()%n+1)
#define Rand0(n) (Rands(n)-1)
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

int angle[10];
int id[10];

bool cmp(int u, int v) {return angle[u]<angle[v];}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
//	freopen("out.out", "w", stdout);
	int _time=clock();
#endif

	int h, m, s, t1, t2;
	cin>>h>>m>>s>>t1>>t2;
	
	if (h==12) h=0;
	if (t1==12) t1=0;
	if (t2==12) t2=0;
	
	for (int i=0; i<5; i++) id[i]=i;

	angle[0]=h*3600+(m*60+s);
	angle[1]=3600*m/5+12*s;
	angle[2]=s*3600/5;
	angle[3]=t1*3600;
	angle[4]=t2*3600;
	
	sort(id, id+5, cmp);
	
	for (int i=0; i<5; i++) {
		int u=id[i];
		int v=id[(i+1)%5];
		if (u>v) swap(u, v);
		if (u==3 && v==4){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}

                           