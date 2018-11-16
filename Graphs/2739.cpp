#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dfs(ll r,vector<ll> adj[],bool visited[],ll c[]){
	ll temp=c[r];
	for(ll i=0;i<adj[r].size();i++){
		if(visited[adj[r][i]]) continue;
		visited[adj[r][i]]=true;
		temp=min(temp,dfs(adj[r][i],adj,visited,c));
	}
	return temp;
}
int main(){
	ios_base::sync_with_stdio(false);
	ll n,m;
	cin>>n>>m;
	ll c[n];
	for(ll i=0;i<n;i++){
		cin>>c[i];
	}
	vector<ll> adj[n];
	for(ll i=0;i<m;i++){
		ll x,y;
		cin>>x>>y;
		x--; y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bool visited[n]={false};
	ll res=0;
	for(ll i=0;i<n;i++){
		if(!visited[i]){
			visited[i]=true;
			res+=dfs(i,adj,visited,c);
		}
	}
	cout<<res;
	return 0;
}