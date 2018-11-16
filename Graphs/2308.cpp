// 250332BI
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) (int)x.size()
#define free linhdeptrai
#define fill(x, val) memset(x, val, sizeof(x))                
#define pb push_back
#define y1 mdsopfsodfjsiod
#define mp make_pair
const int MAXN = (int)(1e6 + 7);

int n, p, free[MAXN];
vector<int> adj[MAXN], roots;  
  
int dfs(int u){
	//cout << "GO: " << u << endl;
 	if(sz(adj[u]) == 0) return 1;
 	int m = 0;
 	for(int i = 0; i < sz(adj[u]); i++){
 	 	int v = adj[u][i];
 	 	m = max(m, dfs(v) + 1);
 	}
 	return m;
}

int main(){
	while(cin >> n){
		roots.clear();
		for(int i = 1; i <= n; i++)	adj[i].clear();
		for(int i = 1; i <= n; i++){
	 	 	cin >> p;
	 	 	if(p != -1){
	 	 	 	adj[p].push_back(i);
	 	 	}else{
	 	 	 	roots.pb(i);
	 	 	}
	 	}
		int res = 1;
		for(int i = 0; i < sz(roots); i++){
		 	int u = roots[i];
			int r = dfs(u);
			res = max(res, r);
			//cout << u << " " << r << endl;
		}
		cout << res << endl;
	}
	return 0;
}