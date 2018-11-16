#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int arr[100005];
vector <int> adj[100005];
int vis[100005];
int main(){ 
	int n, m;
	cin>>n>>m;
	int cnt = 0;
	vector <int> vect(n+1);
	for(int i=1; i<=n;i++){
		cin>>vect[i];
		arr[i]=vect[i];
	}
	for(int i=0; i<n-1;i++){
		int x,y;
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	queue <int> q;
	q.push(1);
	vis[1]=1;
	while(!q.empty()){
		int con = q.front();
		q.pop();
		int leaf=0;
		if(adj[con].size()==1 && arr[con]<=m && con!=1){
			cnt++;
		}
		for(int i=0; i<adj[con].size();i++){
			if(vis[adj[con][i]]==0){
				leaf++;
				vis[adj[con][i]]=1;
				if(vect[con]==0){
					arr[adj[con][i]]=1;
					q.push(adj[con][i]);
				}
				else{
					arr[adj[con][i]]+=arr[con];
					if(arr[adj[con][i]]<=m){
						q.push(adj[con][i]);
					}
				}
			}
		}
	}
	cout<<cnt<<endl;
}