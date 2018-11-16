#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
set<int> g[MAXN];
int n, m;
int c[MAXN];
bool used[MAXN];
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", c+i);
		used[c[i]] = 1;
	}
	for (int i = 1; i <= m; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (c[a] == c[b]) continue;
		g[c[a]].insert(c[b]);
		g[c[b]].insert(c[a]);
	}
	int ans = -1, k = 0;
	for (int i = 1; i <= 100000; ++i) {
		if (not used[i]) continue;
		if (ans < (int)g[i].size()) {
			ans = g[i].size();
			k = i;
		}
	}
	printf("%d\n", k);
	return 0;
}