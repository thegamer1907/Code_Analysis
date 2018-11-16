#include <bits/stdc++.h>
using namespace std;

#define MAXN 11234

vector<int> g[MAXN];
int v[MAXN];
int ans = 0;

void col(int x, int c) {
	if (c != v[x]) ans++;
	c = v[x];

	for (int i = 0; i < g[x].size(); ++i) {
		col(g[x][i], c);
	}
}

int main() {

	int n;
	cin >> n;

	for (int i = 1; i < n; ++i) {
		int a; scanf("%d", &a);
		a--;
		g[a].push_back(i);
	}

	memset(v, 0, sizeof v);

	for (int i = 0; i < n; ++i) scanf("%d", v + i);

	col(0, 0);

	cout << ans << endl;

	return 0;
}