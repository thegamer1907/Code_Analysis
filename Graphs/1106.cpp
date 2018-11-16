#include <bits/stdc++.h>
using namespace std;
bool vis[100005];
vector <int> edges[100005];
int n, t, f;

void dfs(int s, int a[]) {
	vis[s] = true;
	if (s == t || f == 1) {
		f = 1;
		return;
	}
	for (int i = 0; i < edges[s].size(); i++) {
		if (!vis[edges[s][i]]) dfs(edges[s][i],a);
	}
}

int main() {
	cin >>  n >> t;
	int a[n];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		edges[i].push_back(i+a[i]);
	}
	memset(vis,false,sizeof(vis));
	f = 0;
	dfs(1,a);
	cout << (f ? "YES" : "NO");
	return 0;
}