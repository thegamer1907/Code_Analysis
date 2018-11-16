/*input
1
-1

*/
#include <bits/stdc++.h>
#define ll long long
#define db(a) cout<<#a<<" = "<<a<<'\n'
#define pii pair<int, int>
#define x first
#define y second
#define endl '\n'
#define double long double
using namespace std;

const int maxn = 2000;
vector<int> adj[maxn];
vector<int> top; 
int n;

int dfs(int v, int d){
	int best = d;
	for(int u : adj[v]){
		best = max(best, dfs(u, d+1));
	}
	return best;
}
int main(){
	cin >> n;

	for(int i=0; i<n; i++){
		int t;
		cin >> t;
		if(t != -1){
			adj[t-1].push_back(i);
		} else {
			top.push_back(i);
		}
	}

	int ans = 1;

	for(int root : top){
		ans = max(ans, dfs(root, 1));
	}
	cout << ans << endl;
}