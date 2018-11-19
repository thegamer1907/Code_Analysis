#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MN 50
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
struct edge{int to,next,w;}e[MN*2+5];
int n,s,m,f[MN+5][MN+5][MN+5][MN+5];
bool o[MN+5][MN+5][MN+5];
int u[MN+5],head[MN+5],cnt,ans=1e9;
inline void ins(int f,int t,int w)
{
	e[++cnt]=(edge){t,head[f],w};head[f]=cnt;
	e[++cnt]=(edge){f,head[t],w};head[t]=cnt;
}
void dp(int k,int fa,int x)
{
	if(o[k][fa][x])return;o[k][fa][x]=1;
	for(int i=0;i<=k;++i)f[k][fa][x][i]=-1e6;
	int flag=1;
	for(int i=head[x];i;i=e[i].next)if(e[i].to!=fa)
	{
		flag=0;dp(k,x,e[i].to);
		for(int l=k;l;--l)
		{
			f[k][fa][x][l]=max(f[k][fa][x][l],f[k][x][e[i].to][l]+e[i].w);
			for(int j=1;j<l;++j)
				f[k][fa][x][l]=max(f[k][fa][x][l],min(f[k][fa][x][l-j],f[k][x][e[i].to][j]+e[i].w));
		}
	}
	if(flag)for(int i=1;i<=k;++i)f[k][fa][x][i]=f[k-i][0][x][k-i];
}
void dfs(int x,int fa)
{
	for(int i=head[x];i;i=e[i].next)if(e[i].to!=fa)
		dfs(e[i].to,x),u[x]+=u[e[i].to];
}
int main()
{
	int x,y;
	n=read();
	for(int i=1;i<n;++i)x=read(),y=read(),ins(x,y,read());
	s=read();m=read();
	for(int i=1;i<=m;++i)++u[read()];
	for(int i=1;i<=m;++i)for(int j=1;j<=n;++j)dp(i,0,j);
	dfs(s,0);
	for(int i=head[s];i;i=e[i].next)if(u[e[i].to])
		ans=min(ans,f[m][s][e[i].to][u[e[i].to]]+e[i].w);
	printf("%d",ans);
	return 0;
}