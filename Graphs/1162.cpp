#include <bits/stdc++.h>

using namespace std;

const int N = 3e4 + 10;
int a[N];
bool mark[N];

void dfs (int v) {
	mark[v] = 1;
	int u = v + a[v];
	if (!mark[u]) dfs (u);
}

int main () {
	int n, t;
	cin >> n >> t;
	for (int i = 1; i < n; i++) cin >> a[i];
	dfs (1);
	if (mark[t]) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
