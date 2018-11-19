#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
struct edge
{
	int v,w;
	edge(int a,int b):v(a),w(b){}
};
vector<edge> w[100];
int n,s,m,x[100],f[60][60][60][60],d[100][100];
int dfs(int u,int p)
{
	int ans=x[u];
	for(edge i:w[u])
		if(i.v!=p)ans+=dfs(i.v,u);
	return ans;
}
int dp(int u,int v,int k,int a)
{
	int &ans=f[u][v][k][a];
	if(ans!=-1)return ans;
	if(!k)return ans=0;
	if(w[v].size()==1)return ans=dp(v,u,k-a,k-a)+d[u][v];
	int g[60]={1<<30};
	for(int i=1;i<=n;i++)g[i]=-(1<<30);
	for(edge i:w[v])
		if(i.v!=u)for(int j=a;j;j--)
			for(int l=1;l<=j;l++)g[j]=max(g[j],min(g[j-l],dp(v,i.v,k,l)+d[u][v]));
	return ans=g[a];
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		w[a].emplace_back(b,c);
		w[b].emplace_back(a,c);
		d[a][b]=d[b][a]=c;
	}
	scanf("%d%d",&s,&m);
	for(int i=1;i<=m;i++)
	{
		int u;
		scanf("%d",&u);
		x[u]++;
	}
	int ans=1<<30;
	memset(f,-1,sizeof f);
	for(edge i:w[s])
	{
		int cnt=dfs(i.v,s);
		ans=min(ans,dp(s,i.v,m,cnt));
	}
	printf("%d\n",ans);
	return 0;
}
