#include<bits/stdc++.h>

using namespace std;

long long k,n,p[10005],c[10005],color=1,min1,used[10005];

vector<int> adj[10005];
bool v[10005];
void dfs(int s){
	v[s]=1;
	int i;
	for(i=0;i<adj[s].size();i++){
		if(v[adj[s][i]]==0){
			k=adj[s][i];
			if(c[k]!=c[s]){
				color++;
			}
			v[adj[s][i]]=1;
			dfs(adj[s][i]);
		}
	}
}
int main(){
	cin>>n;
	int i;
	memset(v,0,sizeof(v));
	memset(used,0,sizeof(used));
	for(i=2;i<=n;i++){
		cin>>p[i];
		adj[p[i]].push_back(i);
		used[p[i]]++;
	}
	for(i=1;i<=n;i++)
	cin>>c[i];
	dfs(1);
	cout<<color;
}
/*6
1 2 2 1 5
2 1 1 1 1 1*/