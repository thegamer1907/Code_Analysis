#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
#include <vector>
#include <cctype>
#include <string>
#include <functional>
#include <algorithm>
#define ll long long

using namespace std;

vector<int> g[30000];
int used[30000];

void dfs(int i) {
	if (used[i]) {
		return;
	}
	used[i] = 1;
	for (int j = 0; j < g[i].size(); ++j) {
		if (!used[g[i][j]])
			dfs(g[i][j]);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	int n, k;
	cin >> n >> k;
	k--;
	int t;
	for (int i = 0; i < n; ++i) {
		cin >> t;
		g[i].push_back(i + t);
	}
	dfs(0);
	if (used[k])
		cout << "YES";
	else
		cout << "NO";

	return 0;
}