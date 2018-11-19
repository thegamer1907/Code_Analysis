#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ii> vii;

int n, s, m;
vi x;
vector<vii> adjList;
vector<vi> memo;
vector<vi> dist;
vi col;

void combine(vi& res, const vi& arr) {
	int n = res.size();
	for (int i = n - 1; i > 0; --i) 
		for (int j = 0; j <= i; ++j) res[i] = max(res[i], min(res[i-j], arr[j]));
}

int solve(int u, int cn) {
	if (memo[u][cn] != -1) return memo[u][cn];
	if (cn == 0) return 0;
	vi cmb(cn+1), t(cn+1); cmb[0] = t[0] = INT_MAX;
	for (int i = 0; i < n; ++i) 
		if (adjList[i].size() == 1 && i != u) {
			for (int j = 1; j <= cn; ++j) t[j] = dist[u][i] + solve(i, cn - j);
			combine(cmb, t);
		}
	return memo[u][cn] = cmb[cn];
}

void calcdist() {
	dist.assign(n, vi(n, INT_MAX/2));
	for (int i = 0; i < n; ++i) {
		dist[i][i] = 0;
		for (ii vw : adjList[i]) dist[i][vw.first] = vw.second;
	}

	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

void dfs(int u, int p, int c) {
	col[u] = c;
	for (ii vw : adjList[u]) {
		int v, w; tie(v, w) = vw;
		if (v == p) continue;
		dfs(v, u, c);
	}
}
void splittree() {
	col.assign(adjList.size(), -1); col[s] = s;
	for (ii vw : adjList[s]) { int v, w; tie(v, w) = vw; dfs(v, s, v); }
}

int solve1() {
	memo.assign(n, vi(m + 1, -1));
	splittree();
	calcdist();

	int res = INT_MAX;
	for (ii vw : adjList[s]) { 
		int v, w; tie(v, w) = vw; 
		int cnv = 0; for (int i = 0; i < m; ++i) cnv += (col[x[i]] == v);
		vi cmb(cnv + 1), t(cnv + 1); cmb[0] = t[0] = INT_MAX;
		for (int i = 0; i < n; ++i)
			if (adjList[i].size() == 1 && col[i] == v) {
				for (int j = 1; j <= cnv; ++j) t[j] = dist[s][i] + solve(i, m - j);
				combine(cmb, t);
			}
		res = min(res, cmb[cnv]);
	}

	return res;
}

int main() {
	cin >> n;
	adjList.assign(n, vii());
	for (int i = 0; i < n - 1; ++i) {
		int u, v, w; cin >> u >> v >> w; u--, v--;
		adjList[u].push_back(ii(v, w));
		adjList[v].push_back(ii(u, w));
	}
	cin >> s >> m; s--;
	x.assign(m, 0); for (int i = 0; i < m; ++i) cin >> x[i], x[i]--;

	int res = solve1();
	cout << res << endl;
}