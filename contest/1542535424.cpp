#undef NDEBUG
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

int n, m, s;
vector<vii> g;
vvi dist, mem;
vi cc, crnum;

void comb(vi& res, vi const& arr) {
	repd(i, sz(res)) {
		int resi = INT_MIN;
		rep(j, i + 1) resi = max(resi, min(res[j], arr[i - j]));
		res[i] = resi;
	}
}

int solvefromleaf(int u, int c) {
	if (c == 0) return 0;
	if (mem[u][c] != -1) return mem[u][c];

	vi cmb(c + 1, 0); cmb[0] = INT_MAX;
	rep(v, n) if (v != u && sz(g[v]) == 1) {
		vi t(c + 1); t[0] = INT_MAX;
		for (int i = 1; i <= c; ++i) t[i] = dist[u][v] + solvefromleaf(v, c - i);
		comb(cmb, t);
	}

	return mem[u][c] = cmb[c];
}

int solve() {
	int res = INT_MAX;
	for (ii uw : g[s]) {
		int u, w; tie(u, w) = uw;
		int cu = crnum[cc[u]];
		vi cmb(cu + 1, 0); cmb[0] = INT_MAX;
		rep(v, n) if (cc[v] == cc[u] && sz(g[v]) == 1) {
			vi t(cu + 1); t[0] = INT_MAX;
			for (int i = 1; i <= cu; ++i) t[i] = dist[s][v] + solvefromleaf(v, m - i);
			comb(cmb, t);
		}
		res = min(res, cmb[cu]);
	}
	return res;
}

void dfs(int u, int p, int cn) {
	cc[u] = cn;
	for (ii vw : g[u]) {
		int v, w; tie(v, w) = vw;
		if (v == p) continue;
		dfs(v, u, cn);
	}
}

int main() {
	cin >> n;
	g.assign(n, vii()); 
	rep(i, n-1) {
		int u, v, w; cin >> u >> v >> w; u--, v--;
		g[u].push_back(ii(v, w));
		g[v].push_back(ii(u, w));
	}
	cin >> s >> m; s--;
	vi x(m); rep(i, m) { cin >> x[i]; x[i]--; }

	cc.assign(n, -1); cc[s] = 0; int cn = 1;
	for (ii vw : g[s]) dfs(vw.first, s, cn++);
	crnum.assign(cn, 0);
	rep(i, m) crnum[cc[x[i]]]++;

	mem.assign(n, vi(m + 1, -1));
	dist.assign(n, vi(n, INT_MAX / 2));
	rep(i, n) dist[i][i] = 0;
	rep(i, n) rep(j, sz(g[i])) dist[i][g[i][j].first] = g[i][j].second;
	rep(k, n) rep(i, n) rep(j, n) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	cout << solve() << endl;
}
