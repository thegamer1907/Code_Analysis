#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int vis[30005];
vector <int> adj[300005];
int a[30005];
void dfs(int u)
{
	vis[u]=1;
	for(int i=0;i<adj[u].size();i++)
	{
		int cur=adj[u][i];
		if(!vis[cur])
			vis[cur]=1,dfs(cur);
	}
	return;
}
int main()
{
	int n,t;
	cin >> n >> t;
	for(int i=1;i<n;i++)
		cin >> a[i];
	for(int i=1;i<n;i++)
	{
		adj[i].pb(i+a[i]);
	}
	dfs(1);
	if(vis[t])
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}