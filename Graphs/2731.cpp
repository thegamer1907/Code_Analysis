/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool mark[N];
int n, c[N];

int dfs(int u) {
	mark[u] = true;
	int ans = c[u];
	for (auto v: adj[u])
		if (!mark[v])
			ans = min(ans, dfs(v));
	return ans;
}

void readInput() {
	int m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> c[i];
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;

		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
}

void solve() {
	long long ans = 0;
	for (int i = 0; i < n; i++)
		if (!mark[i])
			ans += dfs(i);
	cout << ans << endl;
}

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);
	readInput(), solve();
	return 0;
}
