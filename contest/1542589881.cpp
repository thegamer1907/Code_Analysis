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

#define NN 300

int N;
char p[110][10], buf[10];
set<string> s;
char str[1100000];

bool check() {
	int len=strlen(str), i;
	for (i=0; i<len-1; i+=2) {
		buf[0]=str[i]; buf[1]=str[i+1];
		buf[2]=0;
		if (s.find(buf)==s.end()) break;
	}
	if (i==len) return true;
	if (i==len-1) {
		for (i=0; i<N; i++) {
			if (str[len-1]==p[i][0]) return true;
		}
	}
	
	for (i=0; i<N; i++) if (str[0]==p[i][1]) break;
	if (i==N) return false;
	for (i=1; i<len-1; i+=2) {
		buf[0]=str[i]; buf[1]=str[i+1];
		buf[2]=0;
		if (s.find(buf)==s.end()) break;
	}
	if (i==len) return true;
	if (i==len-1) {
		for (i=0; i<N; i++) {
			if (str[len-1]==p[i][0]) return true;
		}
	}
	return false;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	scanf("%s", str);
	
	scanf("%d", &N);
	for (int i=0; i<N; i++) {
		scanf("%s", p[i]);
		s.insert(p[i]);
	}
	
	if (check()) puts("YES");
	else puts("NO");

	return 0;
}

                      