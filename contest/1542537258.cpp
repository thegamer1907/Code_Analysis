#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(i, n) for(int i = 0; i < n; ++i)
#define sz(x) (int)x.size()

vector<vii> g;
vi subtree, numcr;
vector<vi> e;

void comb(vi& a1, vi const& a2) {
	int n = (int)a1.size();
	for (int i = sz(a1)-1; i >= 0; --i) {
		int ai = min(a1[0], a2[i]);
		for (int j = 1; j <= i; ++j) ai = max(ai, min(a1[j], a2[i-j]));
		a1[i] = ai;
	}
}

int mem[100][51][51];
int solve(int u, int p, int uc, int c) {
	if (mem[e[u][p]][uc][c] != -1) return mem[e[u][p]][uc][c];
	if (c == 0) return 0;
	if (sz(g[u]) == 1) return c == uc ? 0 : g[u][0].second + solve(p, u, c - uc, c - uc);

	//int res = 125000;
	//for (int d = res; d > 0; d/=2) 
	//	while (res - d >= 0) {
	//		int min_dist_cnt = 0;
	//		for (ii vw : g[u]) {
	//			int v, w; tie(v, w) = vw;
	//			if (v == p) continue;
	//			int i; for (i = 1; i <= uc && solve(v, u, i, c) + w < res - d; ++i);
	//			min_dist_cnt += i;
	//		}
	//		if (min_dist_cnt > uc) res -= d;
	//		else break;
	//	}
	//return mem[e[u][p]][uc][c] = res;

	vi cmb(uc + 1, 0); cmb[0] = INT_MAX;
	for (ii vw : g[u]) {
		int v, w; tie(v, w) = vw;
		if (v == p) continue;
		vi vcmb(uc + 1, 0); vcmb[0] = INT_MAX;
		for (int j = 1; j <= uc; ++j) vcmb[j] = solve(v, u, j, c) + w;
		comb(cmb, vcmb);
	}
	return mem[e[u][p]][uc][c] = cmb[uc];
}

int solve1(int s, int c) {
	int res = INT_MAX;
	for (ii vw : g[s]) {
		int v, w; tie(v, w) = vw; int vc = numcr[subtree[v]];
		res = min(res, solve(v, s, vc, c) + w);
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
	g.assign(n, vii()); e.assign(n, vi(n, -1));
	rep(i, n-1) {
		int u, v, w; cin >> u >> v >> w; u--; v--;
		g[u].push_back(ii(v, w));
		g[v].push_back(ii(u, w));
		e[u][v] = i; e[v][u] = n-1+i;
	}
	int s; cin >> s; s--;
	int m; cin >> m; 
	vi x(m); rep(i, m) cin >> x[i], x[i]--;

	int cc = 0; subtree.assign(n, -1); //subtree[s] = cc++;
	for (ii vw : g[s]) { int v = vw.first; dfs(v, s, cc++); }
	numcr.assign(cc, 0);
	for (int xi : x) numcr[subtree[xi]]++;

	memset(mem, -1, sizeof(int) * 100 * 51 * 51);
	cout << solve1(s, m) << endl;
}
