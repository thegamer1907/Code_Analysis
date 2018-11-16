#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAX = 100010;
int n, m;
int cat_count[MAX];
int mx[MAX];
bool visited[MAX];
bool seen[MAX];
vector<int> adj[MAX];
vector<int> elist[MAX];
int ans = 0;

void dfs(int u, int consecutive, int maxsofar)
{
	visited[u] = true;

	if (cat_count[u] == 0) {
		mx[u] = max(mx[u], consecutive);
		consecutive = 0;
	} else {
		++consecutive;
		mx[u] = max(mx[u], consecutive);
	}
	maxsofar = mx[u];

	if (elist[u].empty()) {
		if (mx[u] <= m) {
			++ans;
		}
		return;
	}

	for (auto &v : elist[u]) {
		if (!visited[v]) {
			mx[v] = max(mx[v], maxsofar);
			dfs(v, consecutive, maxsofar);
		}
	}
}

int main ()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int i, x, y;
	cin >> n >> m;
	for (i = 1; i <= n; ++i) {
		cin >> cat_count[i];
	}

	for (i = 1; i < n; ++i) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	queue<int> q;
	q.push(1);
	seen[1] = true;
	while (!q.empty()) {
		auto u = q.front();
		q.pop();

		for (auto &v : adj[u]) {
			if (seen[v]) continue;
			seen[v] = true;
			elist[u].push_back(v);
			q.push(v);
		}
	}

	dfs(1, 0, 0);
	cout << ans << endl;
}
