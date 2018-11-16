#include <stdio.h>
#include <stack>
#include <map>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <climits>
#include <unordered_map>
using namespace std;
#define ll long long
#define mp make_pair
#define inf32 INT_MAX
#define inf64 LLONG_MAX
//#define ld long double
const int mod = (1e9) + 7;
const double eps = 1e-9;
const int siz = 1e5 + 5, siz2 = 1e5 + 5;
int n, m, c[siz];
vector<int> adj[siz];
bool vis[siz], ex[siz];
set<int> diver[siz];
void solve(int i) {
	if (vis[i])
		return;
	vis[i] = true;
	int sz = adj[i].size();
	for (auto v : adj[i]) {
		if (c[v] != c[i])
			diver[c[i]].insert(c[v]);
		solve(v);
	}
}
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &c[i]);
		ex[c[i]] = true;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		solve(i);
	int mx = INT_MIN, ans = -1;
	for (int i = 1; i <= 100000; i++) {
		if (!ex[i])
			continue;
		int sz = diver[i].size();
		if (sz > mx) {
			mx = sz;
			ans = i;
		}
	}
	printf("%d\n", ans);
	return 0;
}