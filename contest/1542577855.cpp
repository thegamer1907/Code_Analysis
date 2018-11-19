#include <stdio.h>
#include <iostream>
#include <vector>
#include <assert.h>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 50;
int n, m, s;
vector<vector<int> > g;
vector<int> leaf;
int L, id[N], d[N][N], loc[N];
int sub[N], in[N];
void DFS(int u, int p) {
	bool l = true;
	for (int i = 0; i < g[u].size(); ++i)
		if (g[u][i] != p) {
			DFS(g[u][i], u);
			l = false;
		}
	if (l) {
		id[u] = leaf.size();
		leaf.push_back(u);
	}
}
int dp[N][N + 1];
int calc(int u, int rem) {
	if (!rem)
		return 0;
	int &ret = dp[u][rem];
	if (ret != -1)
		return ret;
	vector<vector<int> > dp(L + 1, vector<int>(rem + 1));
	for (int i = L; i >= 0; --i)
		for (int j = 0; j <= rem; ++j) {
			if (i == L) {
				dp[i][j] = j ? -1e9 : 1e9;
				continue;
			}
			if (i == u) {
				dp[i][j] = dp[i + 1][j];
				continue;
			}
			for (int take = 0; take <= j; ++take)
				dp[i][j] = max(dp[i][j], min(dp[i + 1][j - take], take == 0 ? 1 << 29 : d[leaf[u]][leaf[i]] + calc(i, rem-take)));
		}
	return ret = dp[0][rem];
}
vector<vector<int> > below;
vector<int> DFS2(int u, int p) {
	if (id[u] != -1)
		below[u].push_back(id[u]);
	sub[u] = in[u];
	for (int i = 0; i < g[u].size(); ++i)
		if (g[u][i] != p) {
			auto ret = DFS2(g[u][i], u);
			for (auto &x : ret)
				below[u].push_back(x);
			sub[u] += sub[g[u][i]];
		}
	return below[u];
}
int main()
{
	scanf("%d", &n);
	g.resize(n);
	below.resize(n);
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			d[i][j] = 1e9*(i != j);
	for (int i = 1, a, b, c; i < n; ++i) {
		scanf("%d%d%d", &a, &b, &c);
		--a; --b;
		d[a][b] = d[b][a] = c;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	scanf("%d", &s);
	--s;
	scanf("%d", &m);
	for (int i = 0; i < m; ++i) {
		scanf("%d", &loc[i]);
		--loc[i];
		++in[loc[i]];
	}
	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
	if (n == 2) {
		printf("%d\n", d[0][1]);
		return 0;
	}
	int root;
	for(int i=0;i<n;++i)
		if (g[i].size() > 1) {
			root = i;
			break;
		}
	memset(id, -1, sizeof(id));
	memset(dp, -1, sizeof(dp));
	DFS(root, -1);
	L = leaf.size();
	if (id[s] != -1) {
		printf("%d\n", calc(id[s], m));
		return 0;
	}
	DFS2(s, -1);
	int res = 1e9;
	for (int i = 0; i < g[s].size(); ++i) {
		int rem = sub[g[s][i]];
		vector<int> &v = below[g[s][i]];
		int L = v.size();
		vector<vector<int> > dp(L + 1, vector<int>(rem + 1));
		for (int i = L; i >= 0; --i)
			for (int j = 0; j <= rem; ++j) {
				if (i == L) {
					dp[i][j] = j ? -1e9 : 1e9;
					continue;
				}
				for (int take = 0; take <= j; ++take)
					dp[i][j] = max(dp[i][j], min(dp[i + 1][j - take], take == 0 ? 1 << 29 : d[s][leaf[v[i]]] + calc(v[i], m - take)));
			}
		res = min(res, dp[0][rem]);
	}
	printf("%d\n", res);
	return 0;
}