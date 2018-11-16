#include <bits/stdc++.h>

using namespace std;

const int N = 100005;

int dist[N];
vector <int> g[N];

void bfs(int u) {
	dist[u] = 0;
	queue <int> q;
	q.push(u);
	while (!q.empty()) {
		u = q.front();
		q.pop();
		for (int i = 0; i < (int)g[u].size(); i++) {
			int v = g[u][i];
			if (dist[v] == -1) {
				dist[v] = 1 + dist[u];
				q.push(v);
			}
		}	
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if (n == m) {
		puts("0");
		return 0;
	}
	if (n > m) {
		printf("%d\n", n - m);
		return 0;
	}
	for (int i = 1; i <= 2 * m; i++) {
		g[i].push_back(i - 1);
		g[i].push_back(i * 2);	
	}
	memset(dist, -1, sizeof dist);
	bfs(n);
	printf("%d\n", dist[m]);
	return 0;
}