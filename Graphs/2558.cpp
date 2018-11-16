#include <bits/stdc++.h>
using namespace std;
int n,a[10009];
vector <int > adj[10009];
int vis[10009];
int ans=1;


void dfs(int s){
    
	vis[s]=1;
	for(int i=0;i<adj[s].size();++i){
		if(!vis[adj[s][i]]){ 	
				if(a[s]!=a[adj[s][i]])
					++ans;
					dfs(adj[s][i]);
				
		}
	}
}

int main()
{
	cin>>n;
	int i,j,x,y;
	for(i=1;i<n;++i){
		cin>>x;
		adj[x].push_back(i+1);
		//adj[]
	}
	for(i=1;i<=n;++i)
		cin>>a[i];
	dfs(1);
     cout<<ans<<"\n";
 return 0;
}