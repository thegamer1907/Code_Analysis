#include <bits/stdc++.h>

using namespace std;

vector<int> g[2002];
int n;
int rt;

int dfs(int u){
	int ret=0;
	for(auto v: g[u]){
		ret=max(ret, 1+dfs(v));
	}
	return ret;
}

int main(){
	cin >> n;
	rt=n+1;
	int x;
	for(int i=1; i<=n; ++i){
		cin >> x;
		if(x==-1){
			g[rt].push_back(i);
		}else{
			g[x].push_back(i);
		}
	}
	int ans=dfs(rt);
	cout << ans << endl;
}