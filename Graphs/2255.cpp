#include <bits/stdc++.h>

using namespace std;

int n, ans, inp;
vector <int> v, adj[2001];

int dfs(int v, int p) {
	int ret = 0;
	for (auto u : adj[v]) 
		if (u != p) 
			ret = max(ret, dfs(u, v));
	return ret + 1;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> inp;
		if (inp == -1)
			v.push_back(i);
		else {
			inp--;
			adj[inp].push_back(i);
			adj[i].push_back(inp);
		}
	}
	for (int i = 0; i < v.size(); i++) 
		ans = max(ans, dfs(v[i], -1));
	cout << ans << endl;
	return 0;
}
