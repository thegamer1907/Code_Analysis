#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
using namespace std;
typedef long long ll;
typedef unsigned ui;
template<class A> void addlog(A a) { cerr << a << endl; }
template<class A, class... B> void addlog(A a, B... b)
{ cerr << a << ' '; addlog(b...); }
const ll INF = { 0x3f3f3f3f3f3f3f3f };
const ui MAX = (1 << 17);
ll d[MAX];
#define re register unsigned

char ss[1<<22],*A=ss,*B=ss;
inline char gc(){ return *A++; }
template<class T>inline void sdf(T&x){
    char c;c = gc(); x=c^48;
    while(c=gc(),33<c)x=(x<<1)+(x<<3)+(c^48);
}
char sr[1<<22],z[20];int C=-1,Z;
template<class T>inline void wer(T x){
    re y=0;if(x<0)y=1,x=-x;
    while(z[++Z]=char(x%10^48),x/=10);if(y)z[++Z]='-';
    while(sr[++C]=z[Z],--Z);sr[++C]=' ';
}


namespace segment {
	const ui MAX2 = MAX,
			  MAX22 = 2 * MAX2;
	ui t[MAX22];
	ui mn(ui a, ui b) { return d[a] < d[b]? a: b; }
	void build() {memset(t, 0x00, sizeof t); t[0] = MAX - 1; }
	inline void mod(ui x, ll w){for(ui i=x+MAX;i&&d[t[i]]>w;i>>=1)t[i]=x;d[x]=w;}
	inline void del(ui x){t[x+=MAX]=0;x>>=1;while(x)t[x]=mn(t[x<<1],t[x<<1|1]),x>>=1;}
}

#define vertex first
#define weight second
typedef pair<ui, ll> edge;
vector<edge> G[MAX];
ui N, M;
ui p[MAX], way[MAX], *w = way;


void dijkstra() {
	memset(d, 0x3f, sizeof d);
	memset(p, 0x00, sizeof p);
	segment::build();
	segment::mod(1, 0);
	for (ui k = 0; k < N; ++ k) {
		ui v = segment::t[1];
		if (v == N) return;
		segment::del(v);
		for (edge &e : G[v])
		if (d[e.vertex] > d[v] + e.weight) {
			p[e.vertex] = v;
			segment::mod(e.vertex, d[v] + e.weight);
		}
	}
}


int main() {
	fread(ss,1,1<<22,stdin);
	sdf(N); sdf(M);
	for (ui a, b, c, i = 0; i < M; ++ i) {
		sdf(a); sdf(b); sdf(c);
		G[a].emplace_back(b, c);
		G[b].emplace_back(a, c);
	}
	dijkstra();
	if (d[N] >= +INF) { wer(-1); }
	else {
		for (ui v = N; v; v = p[v]) *(w ++) = v;
		while ((-- w) >= way) wer(*w);
	}
	fwrite(sr, 1, C + 1, stdout);

	vector<int> vec;
	int n = 1e6;
	for (int i = 0; i < n; ++i)
    {
        vec.push_back(rand());
    }
    sort(vec.begin(), vec.end());
	return 0;
}
