#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 30005;
int n, m;
bool vis[M];
vector<int>adj[M];

void dfs(int node) {
	vis[node] = 1;
	for (auto x : adj[node]) {
		if (!vis[x])
			dfs(x);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin >> n >> m;
	for (int i = 1;i <= n - 1;i++) {
		int x; cin >> x;
		adj[i].push_back(i + x);
	}
	dfs(1);
	if (vis[m])
		cout << "YES\n";
	else
		cout << "NO";
	return 0;
}