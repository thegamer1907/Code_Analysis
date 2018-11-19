#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;


typedef long long i64;
const int inf = (int)1.05e9;

typedef pair<int,int> edge;
typedef vector<edge> vertex;
typedef vector<vertex> graph;

int solve(int v, int m, graph& g, vector<vector<int>>& dist, vector<int>& memo)
{
	if(m == 0)
		return 0;

	const int n = g.size();
	int idx = m * n + v;
	int& ans = memo[idx];

	if(ans < inf)
		return ans;

	int lo = 0, hi = inf;

	while(hi - lo > 1) {

		int mid = (lo + hi) / 2;
		int consumed = 0;

		for(int w = 0; w < n; ++w) {

			if(w == v)
				continue;
			if(g[w].size() != 1)
				continue;

			for(int r = 0; r <= m - 1; ++r) {
				if(solve(w, r, g, dist, memo) + dist[v][w] > mid) {
					consumed += m - r;
					break;
				}
			}
		}

		if(consumed >= m)
			lo = mid;
		else
			hi = mid;
	}

	int a = hi;

	return ans = a;
}

vector<int> compute_dist(int s, graph& g)
{
	const int n = g.size();
	queue<pair<int,int>> q;
	vector<int> dist(n, inf);

	q.push({s, 0});

	while(!q.empty()) {

		int v = q.front().first;
		int d = q.front().second;
		q.pop();

		if(dist[v] < inf) continue;
		dist[v] = d;

		for(auto& e : g[v]) {
			int w = e.first;
			int dd = d + e.second;
			q.push({w, dd});
		}
	}

	return dist;
}

int count_and_color_subtree(int s, int from, graph& g, vector<int>& xs, vector<bool>& leaf)
{
	queue<pair<int,int>> q;
	int c = 0;

	leaf.resize(g.size());
	fill(leaf.begin(), leaf.end(), false);
	q.push({s, from});

	while(!q.empty()) {

		int v = q.front().first;
		int p = q.front().second;
		q.pop();

		for(auto& x : xs) {
			if(x == v)
				c += 1;
		}
		if(g[v].size() == 1)
			leaf[v] = true;

		for(auto& e : g[v]) {
			int w = e.first;
			if(w == p) continue;
			q.push({w, v});
		}
	}

	return c;
}

int main()
{
	int n, m, s;
	graph g;
	vector<int> xs;

	scanf("%d", &n);
	g.resize(n);
	for(int i = 0; i < n - 1; ++i) {
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
		u -= 1; v -= 1;
		g[u].push_back({v, w});
		g[v].push_back({u, w});
	}

	scanf("%d%d", &s, &m);
	s -= 1;
	xs.resize(m);
	for(int i = 0; i < m; ++i) {
		int t;
		scanf("%d", &t);
		t -= 1;
		xs[i] = t;
	}

	vector<vector<int>> dist(n);

	for(int i = 0; i < n; ++i)
		dist[i] = compute_dist(i, g);

	vector<int> memo(n * (m + 1), inf);

	// lo: terrosrists win, hi: policeman win
	int lo = 0, hi = inf;

	while(hi - lo > 1) {

		int mid = (hi + lo) / 2;
		bool ter_win = true;
		vector<bool> leaf;

		for(auto& init_edge : g[s]) {

			const int v = init_edge.first;
			int sub_ter = count_and_color_subtree(v, s, g, xs, leaf);
			int sub_placed = 0;

			for(int w = 0; w < n; ++w) {

				if(w == s)
					continue;
				if(!leaf[w])
					continue;

				for(int r = m - sub_ter; r <= m; ++r) {
					int so = solve(w, r, g, dist, memo);
					if(so + dist[s][w] > mid) {
						sub_placed += m - r;
						break;
					}
					//printf("%d - %d %d -> %d\n", mid, w, r, so);
				}
			}

			//printf("t: %d, %d %d\n", mid, sub_placed, sub_ter);

			if(sub_placed < sub_ter)
				ter_win = false;
		}

		if(ter_win)
			lo = mid;
		else
			hi = mid;
	}

	/*for(int i = 0; i < n; ++i) {
		for(int j = 0; j <= m; ++j) {
			int s = solve(i, j, g, dist, memo);
			printf("%d %d -> %d\n", i, j, s);
		}
	}*/

	int ans = hi;

	printf("%d\n", ans);

	return 0;
}

/* waffle */
