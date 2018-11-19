#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<ii> vii;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define repd(i, n) for(int i = n-1; i >= 0; --i)
#define sz(x) (int)(x).size()

int n, s, m;
vector<vii> g; vi x;
vvi dist, mem;
vi cc; int ncc; vi crim;

void comb(vi& a, vi const& b) {
	repd(i, sz(a)) {
		int ai = min(a[i], b[0]);
		rep(j, i+1) ai = max(ai, min(a[j], b[i-j]));
		a[i] = ai;
	}
}
int solveFromLeaf(int u, int c) {
	if (mem[u][c] != -1) return mem[u][c];
	if (c == 0) return 0;

	vi cmb(c + 1, 0); cmb[0] = INT_MAX;
	rep(v, n) if (v != u && sz(g[v]) == 1) {
		vi t(c + 1); t[0] = INT_MAX;
		for (int i = 1; i <= c; ++i) t[i] = dist[u][v] + solveFromLeaf(v, c - i);
		comb(cmb, t);
	}
	return mem[u][c] = cmb[c];
}

int solve() {
	int res = INT_MAX;
	for (ii kv : g[s]) {
		int u, w; tie(u, w) = kv;
		int uc = crim[cc[u]];
		if (uc == 0) continue; //???
		vi cmb(uc + 1, 0); cmb[0] = INT_MAX;
		rep(v, n) if (cc[v] == cc[u] && sz(g[v]) == 1) {
			vi t(uc + 1); t[0] = INT_MAX;
			for (int i = 1; i <= uc; ++i) t[i] = dist[s][v] + solveFromLeaf(v, m - i);
			comb(cmb, t);
		}
		res = min(res, cmb[uc]);
	}
	return res;
}

void dfs(int u, int p, int ncc) {
	cc[u] = ncc;
	for (ii kv : g[u]) {
		int v, w; tie(v, w) = kv;
		if (v == p) continue;
		dfs(v, u, ncc);
	}
}

int main() {
	cin >> n;
	g.assign(n, vii());
	rep(i, n - 1) {
		int u, v, w; cin >> u >> v >> w; u--; v--;
		g[u].push_back(ii(v, w));
		g[v].push_back(ii(u, w));
	}
	cin >> s; s--;
	cin >> m; x.assign(m, 0);
	rep(i, m) cin >> x[i], x[i]--;

	mem.assign(n, vi(m + 1, -1));
	dist.assign(n, vi(n, INT_MAX/2));
	rep(i, n) dist[i][i] = 0;
	rep(u, n) for (ii kv : g[u]) { int v, w; tie(v, w) = kv; dist[u][v] = w; }
	rep(k, n) rep(i, n) rep(j, n) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	cc.assign(n, -1); ncc = 0;
	rep(i, sz(g[s])) { int v = g[s][i].first; dfs(v, s, ncc++); }
	crim.assign(ncc, 0);
	rep(i, m) crim[cc[x[i]]]++;

	cout << solve() << endl;
}
