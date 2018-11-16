#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector <int> Adj[100001];
int ans = 0, Color[100001], Cons[100001], vis[100001];

void dfs(int v, int m) {
	if(!vis[v]) {
		vis[v] = 1;
		for(int i = 0; i < Adj[v].size(); i++) {
			if(Cons[v] <= m && Adj[v].size() == 1 && vis[Adj[v][i]]) {
				ans++;
			}
			if(!vis[Adj[v][i]]) {
				if(Color[Adj[v][i]] == 1) {
					Cons[Adj[v][i]] = Cons[v] + 1;
				} else {
					Cons[Adj[v][i]] = 0;
				}
				if(Cons[Adj[v][i]] > m){
					continue;
				}
				dfs(Adj[v][i], m);
			}
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> Color[i];
	}
	for(int i = 0; i < n - 1; i++) {
		int x, y;
		cin >> x >> y;
		Adj[x].push_back(y);
		Adj[y].push_back(x);
	}
	if(Color[1] == 1) {
		Cons[1] = 1;
	}
	dfs(1, m);
	cout << ans << endl;
	return 0;
}