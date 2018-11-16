#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int a[10005],n,ans;
vector<int>g[10005];
void dfs(int u,int fa,int cr)
{
	if(a[u]!=cr){

		//cout<<u<<endl;
		ans++;
	}
	for(int i=0;i<g[u].size();i++)
	{
		int v=g[u][i];
		if(v==fa)continue;
		dfs(v,u,a[u]);
	}
}
int main()
{
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int v;scanf("%d",&v);
		g[i].pb(v);
		g[v].pb(i);
	}
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	ans=0;
	dfs(1,0,0);
	cout<<ans;

}
