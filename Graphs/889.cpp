#include <bits/stdc++.h>
using namespace std;
vector <int> g[100005];
int used[100005], n, t, a[100005], ch;

void dfs(int v) {
	used[v] = 1;
	if (v == t) {
		ch = 1;
	}
	for (int i = 0; i < g[v].size(); i++) {
		int to = g[v][i];
		if (!used[to]) {
			dfs(to);
		}
	}
}

int main() {
	
	cin >> n >> t;
	for (int i = 1; i <= n - 1; i++) {
		cin >> a[i];
		g[i].push_back(i + a[i]);
	}
	
	dfs(1);
	
	if (ch == 1) {
		cout << "YES";
	}
	
	else {
		cout << "NO";
	}
	
	return 0;
}