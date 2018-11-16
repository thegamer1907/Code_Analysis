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
#include <math.h>

#define ll long long
#define ull unsigned long long
#define mp make_pair
#define forn(i, fr, to) for(int (i) = fr; (i) < to; ++(i))
#define forln(i, fr, to) for(long long (i) = fr; (i) < to; ++(i))
#define all(v) (v).begin(), (v).end()

using namespace std;

ll inf = 1000000007;
ll mod = 1000000007;

vector<int> a, b;
vector<vector<int>> g;
vector<bool> used(210, false);
vector<int> mt(210, -1);

bool dfs(int v) {
	if (used[v]) 
		return false;
	used[v] = true;
	forn(i, 0, g[v].size()) {
		int to = g[v][i];
		if (mt[to] == -1 || dfs(to)) {
			mt[to] = v;
			return true;
		}
	}
	return false;
}


int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif	
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n;
	a.resize(n);
	forn(i, 0, n) {
		cin >> a[i];
	}

	cin >> m;
	b.resize(m); 
	forn(i, 0, m) {
		cin >> b[i];
	}

	g.resize(n+m);
	sort(all(a));
	sort(all(b));
	forn(i, 0, n) {
		forn(j, 0, m) {
			if (abs(a[i] - b[j]) < 2) {
				g[i].push_back(n + j);
			}
		}
	}
	forn(i, 0, n) {
		used.assign(210, false);
		dfs(i);
	}

	int ans = 0;
	forn(i, 0, mt.size()) {
		if (mt[i] != -1) ans++;
	}
	
	cout << ans;

	return 0;
}


