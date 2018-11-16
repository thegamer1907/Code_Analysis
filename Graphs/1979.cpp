#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > adj(200005);
int n, m;
int cat[200005];
int ans[200005];

int dfs(int node, int par, int cats, int pos){
	if(adj[node].size() == 1 && node!=0){
		if(pos)ans[node] = 1;
	}
	else{
		for(auto i:adj[node]){
			if(i!=par){
				if(cat[i] == 0)dfs(i, node, 0, pos);
				else dfs(i, node, cats + 1,  pos && cats+1 <= m);
//				dfs(i, node, cats + cat[i], pos || (cats+cat[i] <= m));
			}
		}
	}	
}


int main(){
	cin>>n>>m;	

	
	for(int i=0;i<n;i++){
		cin>>cat[i];
		ans[i] = 0;
	}
	
	for(int i=0;i<n-1;i++){
		int x, y;
		cin>>x>>y;
		adj[x-1].push_back(y-1);
		adj[y-1].push_back(x-1);	
	}
	
	dfs(0, -1, cat[0], cat[0] <= m);
	int sum = 0;
	int ct=0;
	for(auto i:ans){sum+=i;} // if(i) cout<<ct++<<":\n";}
	cout<<sum<<"\n";
}
