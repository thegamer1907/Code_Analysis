#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; (i) < (int) (n); (i) ++)
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<vector<int>> g(n);
	vector<int> roots;
	for (int i = 0; i < n; i ++) {
		int p;
		scanf("%d", &p);
		if (p == -1) { 
			roots.push_back(i);
			continue;
		}
		p --;
		g[p].push_back(i);
	}
	vector<bool> used(n);
	vector<int> d(n);
	function<void (int)> dfs = [&](int u) {
		for (auto v : g[u]) {
			d[v] = d[u] + 1;
			dfs(v);
		}
	};
	for (auto i : roots) if (!used[i]) {
		dfs(i);
	}
	int ans = 0;
	rep(i, n) ans = max(ans, d[i]);
	printf("%d\n", ans + 1);
        return 0;
}
