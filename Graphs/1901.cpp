#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define N 300
#define M (N * (N - 1))
#define INF 1000000000

vector < int > _t (N);
vector < vector < int > > g(N, _t);
bool used[N];
int n, m;

int dfs(int u, int flow) {
	if (u == (n - 1)) return flow;
	used[u] = true;
	for (int v = 0; v < n; ++v) {
		if ((g[u][v] > 0) && (!used[v])) {
			int d = dfs(v, min(flow, g[u][v]));
			if (d > 0) {
				g[u][v] -= d;
				g[v][u] += d;
				return d;
			}
		}
	}
	return 0;
}

int main() {
	cin >> n;
	vector < int > a, b;
	a.resize(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	b.resize(m);
	for (int i = 0; i < m; i++)
		cin >> b[i];
	for (int i = 0; i < n; i++) {
		g[0][i + 1] = 1, g[i + 1][0] = 0;
		for (int j = 0; j < m; j++) {
			g[j + n + 1][n + m + 1] = 1;
			if (abs(a[i] - b[j]) <= 1)
				g[i + 1][j + n + 1] = 1;
		}
	}
	n = n + m + 2;
	int ans = 0;
	int d;
	while ((d = dfs(0, INF)) > 0) {
		fill(used, used + N, false);
		ans += d;
	}
	cout << ans;
}