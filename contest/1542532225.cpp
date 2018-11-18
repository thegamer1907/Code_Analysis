#include <bits/stdc++.h>
using namespace std;

const int INF = 2e5;

#define N 55

int d[N][N];

typedef pair <int, int> pii;

vector <pii> v[N];

int *D;

void dfs(int x, int y) {
	for (int i = 0; i < v[x].size(); i ++) {
		int z = v[x][i].first;
		int w = v[x][i].second;
		if (z == y) continue;
		D[z] = D[x] + w;
		dfs(z, x);
	}
}

int n;

int f[N][N];

bool leaf[N];

int g;
int grp[N];
void DFS(int x, int y) {
	grp[x] = g;
	for (int i = 0; i < v[x].size(); i ++) {
		int z = v[x][i].first;
		if (z == y) continue;
		DFS(z, x);
	}
}

int val[N];

int main() {
	//freopen("r.in", "r", stdin);
	scanf("%d", &n);
	for (int i = 1, x, y, w; i < n; i ++) {
		scanf("%d %d %d", &x, &y, &w);
		v[x].push_back(make_pair(y, w));
		v[y].push_back(make_pair(x, w));
	}
	for (int i = 1; i <= n; i ++) {
		int e = 0;
		D = d[i];
		D[i] = 0;
		dfs(i, 0);
	}

	int s, m;

	scanf("%d %d", &s, &m);

	for (int i = 1; i <= n; i ++) if (v[i].size() == 1) leaf[i] = 1;
	for (int k = 1; k <= m; k ++) for (int i = 1; i <= n; i ++) if (leaf[i]) {
		int st = 0, en = INF, mid;
		while (st < en - 1) {
			mid = (st + en) >> 1;
			int tot = 0;
			for (int j = 1; j <= n; j ++) if (leaf[j]) {
				int x = 0;
				for (; x < k && mid - d[i][j] >= f[x][j]; x ++);
				tot += k - x;
			}
			if (tot >= k) st = mid;
			else en = mid;
		}
		f[k][i] = en;
	}

	for (int i = 0; i < v[s].size(); i ++) {
		g = v[s][i].first;
		DFS(g, s);
	}
	for (int i = 1, x; i <= m; i ++) {
		scanf("%d", &x);
		val[grp[x]] ++;
	}

	int st = 0, en = INF, mid;
	while (st < en - 1) {
		mid = (st + en) >> 1;
		bool flag = 0;
		for (int h = 1; h <= n && !flag; h ++) if (grp[h] == h) {
			int tot = 0;
			for (int i = 1; i <= n; i ++) if (grp[i] == h && leaf[i]) {
				int x = m - val[h];
				for (; x < m && mid - d[s][i] >= f[x][i]; x ++);
				tot += m - x;
			}
			if (tot < val[h]) flag = 1;
		}
		if (flag) en = mid;
		else st = mid;
	}
	printf("%d\n", en);

	return 0;
}
