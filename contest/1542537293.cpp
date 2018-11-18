#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define sz(x) (int)x.size()

vector<vii> g;
int m;
vector<vi> dist; vi subtree, numcr;

void comb(vi& a1, vi const& a2) {
	int n = (int)a1.size();
	for (int i = sz(a1)-1; i >= 0; --i) {
		int ai = min(a1[0], a2[i]);
		for (int j = 1; j <= i; ++j) ai = max(ai, min(a1[j], a2[i-j]));
		a1[i] = ai;
	}
}

int mem[50][51];
int solve(int s, int c) {
	if (mem[s][c] != -1) return mem[s][c];
	if (c == 0) return 0;

	vi cmb(c + 1, 0); cmb[0] = INT_MAX;
	for (int i = 0; i < sz(g); ++i) 
		if (i != s && sz(g[i]) == 1) {
			vi vcmb(c + 1, 0); vcmb[0] = INT_MAX;
			for (int j = 1; j <= c; ++j) vcmb[j] = solve(i, c - j) + dist[s][i];
			comb(cmb, vcmb);
		}
	return mem[s][c] = cmb[c];
}

int solve1(int s, int c) {
	int res = INT_MAX;
	for (ii vw : g[s]) {
		int v = vw.first, vc = numcr[subtree[v]];
		vi cmb(vc + 1, 0); cmb[0] = INT_MAX;
		for (int i = 0; i < sz(g); ++i)
			if (subtree[i] == subtree[v] && sz(g[i]) == 1) {
				vi vcmb(vc + 1, 0); vcmb[0] = INT_MAX;
				for (int j = 1; j <= vc; ++j) vcmb[j] = solve(i, c - j) + dist[s][i];
				comb(cmb, vcmb);
			}
		res = min(res, cmb[vc]);
	}
	return res;
}

void dfs(int u, int p, int cc) {
	subtree[u] = cc;
	for (ii vw : g[u]) {
		int v = vw.first;
		if (v == p) continue;
		dfs(v, u, cc);
	}
}

int main() {
	int n; cin >> n;
	g.assign(n, vii());
	rep(_, n-1) {
		int u, v, w; cin >> u >> v >> w; u--; v--;
		g[u].push_back(ii(v, w));
		g[v].push_back(ii(u, w));
	}
	int s; cin >> s; s--;
	int m; cin >> m; 
	vi x(m); rep(i, m) cin >> x[i], x[i]--;

	int cc = 0; subtree.assign(n, -1);
	for (ii vw : g[s]) { int v = vw.first; dfs(v, s, cc++); }
	numcr.assign(cc, 0);
	for (int xi : x) numcr[subtree[xi]]++;

	dist.assign(n, vi(n, INT_MAX/2));
	rep(i, n) dist[i][i] = 0;
	rep(i, n) rep(j, sz(g[i])) dist[i][g[i][j].first] = g[i][j].second;
	rep(k, n) rep(i, n) rep(j, n) dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	memset(mem, -1, sizeof(int) * 50 * 51);
	cout << solve1(s, m) << endl;
}
