#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <memory.h>
#include <deque>
#include <stack>

#define ll long long
#define ull unsigned long long
#define mp make_pair
#define forn(i, fr, to) for(int (i) = fr; (i) < to; ++(i))
#define forln(i, fr, to) for(long long (i) = fr; (i) < to; ++(i))
#define all(v) (v).begin(), (v).end()

using namespace std;

ll inf = 1000000007;
ll mod = 1000000007;

vector<int> a;
vector<pair<int, int>> t(400000, { 0, -1 });

void build(int v, int tl, int tr) {
	if (tl == tr) {
		t[v] = { a[tl], a[tl] };
		return;
	}
	else {
		int tm = (tl + tr) / 2;
		build(2 * v, tl, tm);
		build(2 * v + 1, tm + 1, tr);
		t[v].first = t[2 * v].first + t[2 * v + 1].first;
	}
}

void push(int v, int l, int r) {
	if (t[v].second != -1) {
		t[2 * v].second = t[2 * v + 1].second = t[v].second;
		t[2 * v].first = t[v].second*l;
		t[2 * v + 1].first = t[v].second*r;
		t[v].second = -1;
	}
}

void update(int v, int tl, int tr, int l, int r, int val) {
	if (l > r) {
		return;
	}
	if (tl == l && tr == r) {
		t[v].second = val;
		t[v].first = (r - l + 1)*val;
		return;
	}
	int tm = (tl + tl) / 2;
	push(v, (tm - tl + 1), (tr - (tm + 1) + 1));
	update(2 * v, tl, tm, l, min(tm, r), val);
	update(2 * v + 1, tm + 1, tr, max(tm + 1, l), r, val);
	t[v].first = t[2 * v].first + t[2 * v + 1].first;
}

int get_sm(int v, int tl, int tr, int l, int r) {
	if (l > r) {
		return 0;
	}
	if (tl == l && tr == r) {
		return t[v].first;
	}
	int tm = (tl + tl) / 2;
	push(v, (tm - tl + 1), (tr - (tm + 1) + 1));

	return get_sm(2 * v, tl, tm, l, min(tm, r)) +
		get_sm(2 * v + 1, tm + 1, tr, max(tm + 1, l), r);
}


struct edge {
	int a, b, cap, flow;
};

int s, tt;
vector<vector<int>> g(100000);
int d[100000], ptr[100000];
queue<int> q;
vector<edge> e;

void add_edge(int a, int b, int cap) {
	edge e1 = { a, b, cap, 0 };
	edge e2 = { b, a, cap, 0 };
	g[a].push_back(e.size());
	e.push_back(e1);
	g[b].push_back(e.size());
	e.push_back(e2);
}

bool bfs() {
	q.push(s);
	memset(d, -1, sizeof(d));
	d[s] = 0;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int i = 0; i < g[v].size(); ++i) {
			int id = g[v][i];
			int to = e[id].b;
			if (d[to] == -1 && e[id].flow < e[id].cap) {
				d[to] = d[v] + 1;
				q.push(to);
			}
		}
	}
	return d[tt] != -1;
}

int dfs(int v, int flow) {
	if (!flow) return 0;
	if (v == tt) return flow;
	for (; ptr[v] < g[v].size(); ++ptr[v]) {
		int id = g[v][ptr[v]];
		int to = e[id].b;
		if (d[to] != d[v] + 1) continue;
		int delta = dfs(to, min(flow, e[id].cap - e[id].flow));
		if (delta) {
			e[id].flow += delta;
			e[id ^ 1].flow -= delta;
			return delta;
		}
	}
	return 0;
}

int dinic() {
	int flow = 0;
	while (true) {
		if (!bfs()) break;
		memset(ptr, 0, sizeof(ptr));
		while (int add_fl = dfs(s, inf)) {
			flow += add_fl;
		}
}
	return flow;
}

vector<int> pref(string& s) {
	vector<int> pi(s.size(), 0);
	for (int i = 1; i < s.size(); ++i) {
		int j = pi[i - 1];
		while (j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if (s[i] == s[j]) j++;
		pi[i] = j;
	}

	return pi;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif	
	ios::sync_with_stdio(false);

	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	
	while (t--) {
		for (int i = 0; i < n - 1; ++i) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}

	cout << s;

	return 0;
}


