#include <bits/stdc++.h>
using namespace std;

void dfs(int source, int visited[], vector<int> adj[]) {
	if (!visited[source]) {
		visited[source] = 1;

		for (int ad : adj[source]) 
			dfs(ad, visited, adj);
	}
}

int main(int argc, char** argv) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);

	int N, T, a;

	cin >> N >> T;

	vector<int> adj[100001];
	int visited[100001] = {};

	for (int i = 1; i <= N; i++) {
		cin >> a;
		adj[i].push_back(i+a);
	}

	dfs(1, visited, adj);
	
	cout << (visited[T] ? "YES" : "NO") << endl;
}
