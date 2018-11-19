#include <bits/stdc++.h>

using namespace std;

const int N = 55;
const int INF = 1e9 + 7;

int n, m, nn = 0, s;
int cnt[N << 1], all;

vector<pair<int, int> > adj[N << 1];
vector<pair<int, int> > e[N];
int trans[N];
map<pair<int, int>, int> f[N][N];

bool visit[N][N << 1][N << 1];

int dfs(int u, int eid, int father) {
	int cur = nn++;
	if (eid == 0) {
		trans[u] = cur;
	}
	for (int i = eid; i < e[u].size(); i++) {
		int v = e[u][i].first;
		if (v == father) {
			continue;
		}
		int t;
		adj[cur].push_back({t = dfs(v, 0, u), e[u][i].second});
		adj[t].push_back({cur, e[u][i].second});
		t = dfs(u, i + 1, father);
		if (t != -1) {
			adj[cur].push_back({t, 0});
			adj[t].push_back({cur, 0});
		}
		return cur;
	}
	if (eid != 0) return -1;
	return cur;
}

int collect(int u, int father) {
	int ret = cnt[u];
	for (auto e : adj[u]) {
		int v = e.first;
		if (v == father) {
			continue;
		}
		ret += collect(v, u);
	}
	return ret;
}

void solve(int from, int u, int weight) {
	if (visit[all][from][u]) return;
	visit[all][from][u] = true;

	auto ee = make_pair(from, u);

	// initialize
	for (int sub = 0; sub <= all; sub++) {
		f[all][sub][ee] = (all == 0 ? 0 : -INF);
	}
	if (all != 0) {
		f[all][0][ee] = INF;
	}
	if (all == 0) return ;

	int sons = 0;
	for (auto e : adj[u]) {
		int v = e.first;
		if (v == from) continue;
		solve(u, v, e.second);
		sons++;
		for (int sub = all; sub >= 0; sub--) {
			int best = 0;
			for (int sr = 0; sr <= sub; sr++) {
				int sl = sub - sr;
				auto er = make_pair(u, v);
				assert(f[all][sr].count(er));
				int cost = min(f[all][sl][ee], weight + f[all][sr][er]);
				// if (all == 1 && sub == 1 && from == 2 && u == 0) {
				// 	cout << " cost = " << cost << endl;
				// 	cout << f[all][sr][er] << endl;
				// }
				best = max(best, cost);
			}
			f[all][sub][ee] = best;
		}
	}
	if (sons == 0) {
		for (int sub = 1; sub <= all; sub++) {
			f[all][sub][ee] = weight + f[all - sub][all - sub][make_pair(u, from)];
		}
		f[all][0][ee] = INF;
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		int u, v, w;
		scanf("%d %d %d", &u, &v, &w);
		u--, v--;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	nn = n;
	for (int i = 0; i < n; i++) trans[i] = i;
	// dfs(0, 0, -1);

	// for (int u = 0; u < nn; u++) {
	// 	for (auto e : adj[u]) {
	// 		int v = e.first;
	// 		if (v > u) {
	// 			cout << " edge " << u << " " << v << " val = " << e.second << endl;
	// 		}
	// 	}
	// }

	scanf("%d", &s);
	s = trans[s - 1];
	// cout << "s = " << s << endl;
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int p;
		scanf("%d", &p);
		cnt[trans[p - 1]]++;
		// cout << "terr is located at " << trans[p - 1] << endl;
	}

	memset(visit, false, sizeof(visit));
	for (all = 0; all <= m; all++) {
		for (int u = 0; u < nn; u++) {
			for (auto e : adj[u]) {
				int v = e.first;
				solve(u, v, e.second);
			}
		}
	}
	int ans = INF;
	for (auto e : adj[s]) {
		int v = e.first;
		ans = min(ans, f[m][collect(v, s)][{s, v}]);
	}
	cout << ans << endl;
	// cout << f[m][m][{1, 0}] << endl;
	// cout << f[m][m][{0, 2}] << endl;
	// cout << f[4][2][{2, 3}] << endl;
	// cout << f[2][2][{3, 2}] << endl;
	// cout << f[2][1][{2, 4}] << endl;
	// cout << f[2][1][{4, 5}] << endl;
	// cout << f[1][1][{5, 4}] << endl;
	// cout << f[1][1][{4, 2}] << endl;
	// cout << f[1][1][{2, 0}] << endl;
	// cout << f[1][1][{0, 1}] << endl;
	return 0;
}
