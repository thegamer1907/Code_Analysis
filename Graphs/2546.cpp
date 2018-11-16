#include<bits/stdc++.h>

using namespace std;
const int N=1e5+1;
int n,ans=1;
vector<int> adj[N];
int color[N];
int kt[N];
int pa[N];
void dfs(int u,int p){
	for(int i=0;i<adj[u].size();++i){
		int v=adj[u][i];
		if(v!=p){
			pa[v]=u;
			dfs(v,u);
		}
	}
}
void slove(int u){
	for(int i=0;i<adj[u].size();++i){
		int v=adj[u][i];
		if(v!=pa[u]){
			if(color[v]!=color[pa[v]])
				ans++;	
			slove(v);
		}
	}
}
int main(){
	cin>>n;
	for(int i=2;i<=n;++i){
		int u;
		cin>>u;
		adj[i].push_back(u);
		adj[u].push_back(i);
	}
	dfs(1,0);
	for(int i=1;i<=n;++i)
		cin>>color[i];	
	slove(1);
	cout<<ans;
}