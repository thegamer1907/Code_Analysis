#include<bits/stdc++.h>
#define inf 1061109567
#define ans dp[f][v][s1][s2]
using namespace std;
const int M=55;
int n,rt,m,du[M],cot[M],edge[M][M],dp[M][M][M][M],g[2][M];
vector<int>mmp[M];
void in()
{
	int a,b,c;
	scanf("%d",&n);
	for(int i=1;i<n;++i)
	scanf("%d%d%d",&a,&b,&c),mmp[a].push_back(b),mmp[b].push_back(a),
	edge[a][b]=edge[b][a]=c,++du[a],++du[b];
	scanf("%d%d",&rt,&m);
	for(int i=1;i<=m;++i)scanf("%d",&a),++cot[a];
}
void dfs(int v,int f)
{
	int to;
	for(int i=mmp[v].size()-1;i>=0;--i)
	{to=mmp[v][i];if(to==f)continue;dfs(to,v);cot[v]+=cot[to];}
}
int dfs2(int f,int v,int s1,int s2)
{
	if(!s1&&!s2)return 0;
	if(!s1)return inf;
	if(ans<inf)return ans;
	if(du[v]==1){ans=dfs2(v,f,s2,0)+edge[f][v];return ans;}
	int to,dis,p=0;
	for(int i=mmp[v].size()-1;i>=0;--i)
	{
		to=mmp[v][i];if(to==f)continue;
		for(int j=0;j<=s1;++j)dfs2(v,to,j,s1+s2-j);
	}
	memset(g[1],0,sizeof(g[1]));
	g[1][0]=inf;
	for(int i=mmp[v].size()-1;i>=0;--i)
	{
		to=mmp[v][i];if(to==f)continue;
		memset(g[p],0,sizeof(g[p]));
		for(int j=0;j<=s1;++j)for(int k=0;j+k<=s1;++k)
		g[p][j+k]=max(g[p][j+k],min(g[p^1][j],dfs2(v,to,k,s1+s2-k)));
		p^=1;
	}
	ans=g[!p][s1]+edge[f][v];
	return ans;
}
void ac()
{
	int mn=inf,to;
	dfs(rt,0);memset(dp,63,sizeof(dp));
	for(int i=mmp[rt].size()-1;i>=0;--i)
	{to=mmp[rt][i];mn=min(mn,dfs2(rt,to,cot[to],m-cot[to]));}
	printf("%d",mn);
}
int main(){in();ac();}