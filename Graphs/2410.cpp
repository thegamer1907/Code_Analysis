#include <bits/stdc++.h>
using namespace std;

#define pb push_back

const int N = 2005;
vector<int> adj[N];
int ans, depth[N];

void dfs(int u, int prev) {
	depth[u] = depth[prev]+1;
	ans = max(ans, depth[u]);
	int size = adj[u].size();
	for (int i = 0; i < size; i++) {
		int v = adj[u][i];
		if (v != prev)
			dfs(v, u);
	}
}

int main() {
	int n; scanf("%d", &n);
	for (int i = 0; i <= n; i++) adj[i].clear();
	for (int i = 1; i <= n; i++) {
		int v; scanf("%d", &v);
		if (v != -1) adj[v].pb(i);
	}
	
	ans = 1;
	for (int i = 1; i <= n; i++) {
		depth[0] = 0;
		dfs(i, 0);
//		printf(">> %d ans=%d\n", i, ans);
	}
	
	printf("%d\n", ans);
	
	return 0;
}

/*
6
-1
-1
2
3
1
1
*/
