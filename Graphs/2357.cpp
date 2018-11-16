#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N = 1e5+50;
const int oo = 1e9;
const int mod = 1e9+7;

vector<int> g[2001];
bool vis[2001];
int sz,ans=1;

void dfs(int u){
	vis[u]=1;
	for(int i=0;i<g[u].size();i++){
		int v = g[u][i];
		if(vis[v])continue;
		sz++;
		dfs(v);
		ans = max(ans,sz);
		sz--;
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a==-1)
			v.push_back(i);
		else
			g[a].push_back(i);
	}
	for(int i=0;i<v.size();i++){
		sz=1;
		dfs(v[i]);
	}
	cout << ans << endl;
}