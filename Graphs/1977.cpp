#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; (i) < (int) (n); (i) ++)
using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	vector<int> cats(n);
	rep(i, n) {
		scanf("%d", &cats[i]);
	}
	vector<vector<int>> g(n);
	rep(i, n - 1) {
		int a, b;
		scanf("%d%d", &a, &b);
		a --, b --;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int ans = 0;
	function<void (int, int, int)> dfs = [&](int u, int prev, int c) {
		if (cats[u] == 0) c = 0;
		else c ++;
		if (c > m) return;
		bool cnt = 0;
		for (auto v : g[u]) if (v != prev) {
			dfs(v, u, c);
			cnt ++;
		}
		if (cnt == 0) {
			ans ++;
		}
	};
	dfs(0, -1, 0);
	printf("%d\n", ans);
        return 0;
}
