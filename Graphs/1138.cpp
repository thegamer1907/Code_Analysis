#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3e5 + 10;
int n, t;
int mark[MAXN];
vector <int> adj[MAXN];

void dfs(int x) {
	mark[x] = true;
	for (int i = 0; i < adj[x].size(); i++)
		if (!mark[adj[x][i]])
			dfs(adj[x][i]);
}

int main() {
	cin >> n >> t;
	for (int i = 1; i < n; i++) {
		int x;
		cin >> x;
		adj[i].push_back(i + x);
	}
	dfs(1);
	mark[t] ? cout << "YES" : cout << "NO";
	return 0;
}
