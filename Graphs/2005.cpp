#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAX = 100010;
int n, m;
int cat_count[MAX];
int mx[MAX];
bool visited[MAX];
int child_count[MAX];
vector<int> elist[MAX];
int ans = 0;

void dfs(int u, int consecutive, int maxsofar)
{
	visited[u] = true;

	if (cat_count[u] == 0) {
		mx[u] = max(mx[u], consecutive);
		consecutive = 0;
	} else {
		++consecutive;
		mx[u] = max(mx[u], consecutive);
	}
	maxsofar = mx[u];

	if (child_count[u] == 0) {
		if (mx[u] <= m) {
			++ans;
		}
		return;
	}

	for (auto &v : elist[u]) {
		if (!visited[v]) {
			child_count[v]--;
			mx[v] = max(mx[v], maxsofar);
			dfs(v, consecutive, maxsofar);
		}
	}
}

int main ()
{
	ios::sync_with_stdio(false); cin.tie(nullptr);

	int i, x, y;
	cin >> n >> m;
	for (i = 1; i <= n; ++i) {
		cin >> cat_count[i];
	}

	for (i = 1; i < n; ++i) {
		cin >> x >> y;
		elist[x].push_back(y);
		elist[y].push_back(x);
		child_count[x]++;
		child_count[y]++;
	}

	dfs(1, 0, 0);
	cout << ans << endl;
}
