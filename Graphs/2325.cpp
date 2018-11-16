#include <iostream>
#include <iomanip>
#include <fstream>

#include <cmath>
#include <string>

#include <algorithm>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

int n, mh = 0;
int manager[2001];
vector<int> adj[2001];

void dfs(int src, int h) {
	mh = max(mh, h);
	for (int i = 0; i < adj[src].size(); i++) {
		dfs(adj[src][i], h+1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 1; i < n+1; i++) {
		cin >> manager[i];
		if (manager[i] != -1) adj[manager[i]].push_back(i);
	}

	for (int i = 1; i < n+1; i++) {
		if (manager[i] == -1) dfs(i, 1);
	}

	cout << mh << endl;

	return 0;
}
