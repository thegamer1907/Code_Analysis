#include <bits/stdc++.h>
using namespace std;

void dfs(int curr_vertex, int parent_vertex, vector< vector<int> > &edges, vector<int> &cat, int curr_cons_cat, int m, int &restaurants) {
	curr_cons_cat = cat[curr_vertex] ? curr_cons_cat + 1 : 0;
	if(curr_cons_cat > m) return;
	int numOfChild = 0;
	for(int i=0; i<edges[curr_vertex].size(); i++) {
		if(edges[curr_vertex][i] != parent_vertex) {
			dfs(edges[curr_vertex][i], curr_vertex, edges, cat, curr_cons_cat, m, restaurants);
			numOfChild++;
		}
	}
	if(numOfChild == 0) {
		restaurants++;
	}
}

int main() {
	const int MAX_N = 1e5 + 5;
	int n, m, x, y, restaurants = 0;
	vector<int> a(MAX_N);
	vector< vector<int> > edges(MAX_N);

	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<n; i++) {
		cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	dfs(1, -1, edges, a, 0, m, restaurants);
	cout << restaurants << endl;
	return 0;
}