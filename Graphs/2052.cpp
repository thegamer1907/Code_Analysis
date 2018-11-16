// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int n, m;
int a[100005];
vector<int> g[100005];
int ans = 0;

void dfs(int u, int par, int k) {
	//cout << u << " " << g[u].size() << endl;
	if (k + a[u] > m) {
		return;
	}
	if (g[u].size() == 1 && par != -1) {
		//cout << u << endl;
		ans++;
		return;
	}
	for (int i = 0; i < g[u].size(); i++) {
		int v = g[u][i];
		if (v == par)
			continue;
		if (a[u]) {
			dfs(v, u, k + 1);
		}
		else {
			dfs(v, u, 0);
		}
	}
	return;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(0, -1, 0);
	cout << ans << endl;

	return 0;
}

