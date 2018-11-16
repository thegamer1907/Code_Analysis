#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, int> PLI;
const int MAXN = 100005;
const long long INF = 1LL<<60;
vector<PLI> a[MAXN];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);

	priority_queue<PLI, vector<PLI>, greater<PLI>> Q;
	vector<long long> d(n+1, INF);
	vector<int> last(n+1, -1);
	d[1] = 0;
	Q.push({0, 1});

	for (int i = 0; i < m; i++) {
		int x, y, w;
		scanf("%d%d%d", &x, &y, &w);
		a[x].push_back({y, w});
		a[y].push_back({x, w});
	}
	
	while (!Q.empty()) {
		auto lupair = Q.top(); Q.pop();
		long long l = lupair.first;
		int u = lupair.second;
		if (d[u] != l) continue;
		for (auto vwpair : a[u]) {
			int v = vwpair.first;
			int w = vwpair.second;
			if (d[v] > d[u] + w) {
				d[v] = d[u] + w;
				last[v] = u;
				Q.push({d[v], v});
			}
		}
	}
	
	if (d[n] == INF) {
		puts("-1");
	} else {
		vector<int> path;
		int now = n;
		while (now != 1) {
			path.push_back(now);
			now = last[now];
		}
		printf("1");
		for (int i = path.size()-1; i >= 0; i--) {
			printf(" %d", path[i]);
		}
		puts("");
	}

	return 0;
}
