#include <bits/stdc++.h>
using namespace std;

const int MAX = 20005;
int ans, c[MAX];
vector<int> G[MAX];

void dfs(int u, int color) {
	if (c[u] != color) {
		color = c[u];
		ans++;
	}
	
	for (int i = 0; i < G[u].size(); i++) {
		int v = G[u][i];
		dfs(v, color);
	}
}

int main() {
	int n, x;
	while (cin >> n) {
		for (int i = 1; i <= n; i++) {
			G[i].clear();
		}
		for (int i = 2; i <= n; i++) {
			cin >> x;
			G[x].push_back(i);
		}
		for (int i = 1; i <= n; i++) {
			cin >> c[i];
		}
		
		ans = 0;
		dfs(1, -1);
		cout << ans << endl;
	}
	return 0;
}