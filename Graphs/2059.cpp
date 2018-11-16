#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;
int n, m, x, y, restaurants = 0;
int a[MAX_N];
vector<int> edges[MAX_N];
bool visit[MAX_N];

void dfs(int curr_vertex, int curr_cons_cat) {
	if(visit[curr_vertex]) return;
	visit[curr_vertex] = true;
	curr_cons_cat = a[curr_vertex] ? curr_cons_cat + 1 : 0;
	if(curr_cons_cat > m) return;
	int numOfChild = 0;
	for(int i=0; i<edges[curr_vertex].size(); i++) {
		if(!visit[edges[curr_vertex][i]]) {
			dfs(edges[curr_vertex][i], curr_cons_cat);
			numOfChild++;
		}
	}
	if(numOfChild == 0) {
		restaurants++;
	}
}

int main() {
	cin >> n >> m;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		visit[i] = false;
	}
	for(int i=1; i<n; i++) {
		cin >> x >> y;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}
	dfs(1, 0);
	cout << restaurants << endl;
	return 0;
}