#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#define rep(i, a, b) for (int i = (a), _ = (b); i <= _; ++ i)
#define per(i, a, b) for (int i = (a), _ = (b); i >= _; -- i)
#define For(i, a, b) for (int i = (a), _ = (b); i < _; ++ i)
#define fore(e, x, y) for (int p = e(x), y = e[p].y; p; y = e[p = e[p].nxt].y)
#define ri rd<int>
using namespace std;
const int maxN = 57;
const int INF = 1e9 + 7;

template<class T> inline T rd() {
	bool f = 1; char c = getchar(); for (; !isdigit(c); c = getchar()) if (c == '-') f = 0;
	T x = 0; for (; isdigit(c); c = getchar()) x = x * 10 + c - 48; return f ? x : -x;
}

struct vec {
	static const int maxE = maxN;
	int g[maxN], te;
	struct edge {int y, d, nxt;} e[maxE << 1];
	vec() {te = 1;}
	inline void push(int x, int y, int d) {e[++te] = (edge){y, d, g[x]}; g[x] = te;}
	inline void link(int x, int y, int d) {push(x, y, d), push(y, x, d);}
	inline int& operator () (int x) {return g[x];}
	inline edge& operator [] (int x) {return e[x];}
}e;

int n, m, s;
int sz[maxN];
int f[maxN << 1][maxN];
int num[maxN], g[maxN], id, rt[maxN];
int deg[maxN];
int dis[maxN][maxN], bg;

void getsz(int x, int fa) {
	num[x] = id;
	fore (e, x, y) if (y != fa) {
		getsz(y, x);
		sz[x] += sz[y];
	}
}

void getdis(int x, int fa) {
	fore (e, x, y) if (y != fa) {
		dis[bg][y] = dis[bg][x] + e[p].d;
		getdis(y, x);
	}
}

int F(int x, int rest) {
	int &res = f[x][rest];
	if (~res) return res;
	if (rest == 0) return res = 0;

	int l = 0, r = INF, mid, sum;
	while (l != r) {
		mid = (l + r) / 2 + 1, sum = 0;
		rep (i, 1, n) if (x != i && deg[i] == 1) {
			int j;
			for (j = 1; j <= rest; ++ j) if (dis[x][i] + F(i, rest - j) < mid) break;
			sum += j - 1;
		}
		if (sum >= rest) l = mid;
		else r = mid - 1;
	}
	return res = l;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("e.in", "r", stdin);
#endif
	
	n = ri();
	For (i, 1, n) {
		int x = ri(), y = ri(), z = ri();
		e.link(x, y, z);
		deg[x] ++, deg[y] ++;
	}

	rep (i, 1, n) {
		dis[i][i] = 0;
		getdis(bg = i, 0);
	}

	s = ri();

	m = ri(); 
	rep (i, 1, m) sz[ri()] ++;

	fore (e, s, y) {
		rt[++id] = y;
		getsz(y, s);
	}

	memset(f, -1, sizeof f);
	F(1, 2);

	int l = 0, r = INF, mid;
	while (l != r) {
		mid = (l + r) / 2 + 1;
		memset(g, 0, sizeof g);

		rep (i, 1, n) if (i != s && deg[i] == 1) {
			int j;
			for (j = 1; j <= sz[rt[num[i]]]; ++ j) if (dis[s][i] + F(i, m - j) < mid) break;
			g[num[i]] += j - 1;
		}

		bool ok = 1;
		rep (i, 1, id) if (g[i] < sz[rt[i]]) ok = 0;

		if (ok) l = mid;
		else r = mid - 1;
	}

	printf("%d\n", l);

	return 0;
}
