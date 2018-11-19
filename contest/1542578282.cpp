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

#define MM 15
bitset<1<<MM> a[201][MM];

#define NN 211

int len[NN];
char s[NN][NN], pre[NN][NN], suf[NN][NN];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	int n, m, u, v;
	cin>>n;
	char c=0;
	for (int i=1; i<=n; i++) {
		scanf("%s", s+i), len[i]=strlen(s[i]);

		swap(c, s[i][MM]);
		strcpy(pre[i], s[i]);
		swap(c, s[i][MM]);
		reverse(s[i], s[i]+len[i]);
		swap(c, s[i][MM]);
		strcpy(suf[i], s[i]);
		swap(c, s[i][MM]);
		reverse(s[i], s[i]+len[i]);

		for (int j=0; j<MM; j++) {
			int t=0, u=(1<<j+1)-1;
			for (int r=0; r<min(j, len[i]); r++) t=(t<<1)+s[i][r]-'0';
			for (int r=j; r<len[i]; r++) {
				t=(t<<1)+s[i][r]-'0';
				t&=u;
				a[i][j].set(t);
			}
		}
	}

	cin>>m;
	for (int i=1; i<=m; i++) {
		gn(u, v);
		len[i+n]=min(len[u]+len[v], MM);
		strcpy(pre[i+n], pre[u]);
		strcat(pre[i+n], pre[v]);
		pre[i+n][MM]=0;
		strcpy(suf[i+n], suf[v]);
		strcat(suf[i+n], suf[u]);
		suf[i+n][MM]=0;
		int ls=strlen(suf[u]), lp=strlen(pre[v]);
		int ans=0;
		for (int j=0; j<MM; j++) {
			a[i+n][j]=a[u][j]|a[v][j];
			int t=0, cc=0, uu=(1<<j+1)-1;
			for (int r=0; r<min(ls, j); cc++, r++) t=t+(1<<r)*(suf[u][r]-'0'), t&=uu;
			for (int r=0; r<lp; cc++, r++) {
				t=(t<<1)+pre[v][r]-'0';
				t&=uu;
				if (cc>=j) a[i+n][j].set(t);
			}
			if (a[i+n][j].count()==(1<<j+1)) ans=j+1;
		}
		printf("%d\n", ans);
	}

	return 0;
}

                     