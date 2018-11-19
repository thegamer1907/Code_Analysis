#include<bits/stdc++.h>
#define N 55
#define M 1000000007
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define VI vector<int>
#define X first
#define Y second
#define CL(a) memset(a,0,sizeof a) 
#define fr(i,n) for(int i=1;i<=n;i++)
#define rd(x) scanf("%d",&x)
using namespace std;
int n,m,S,x,y,z,an,tot,f[N][N][N][N],d[N][N],du[N],sz[N],g[N];
bool vs[N][N][N][N];VI V[N];
void ins(int x,int y,int z){V[x].PB(y);d[x][y]=d[y][x]=z;du[x]++;}
void dfs(int x,int fa){
	for(int y:V[x])if(y!=fa)dfs(y,x),sz[x]+=sz[y];
}
int dp(int u,int v,int su,int sv){//u-->v
	if(!sv&&!su)return 0;
	if(vs[u][v][su][sv])return f[u][v][su][sv];
	vs[u][v][su][sv]=1;
	if(du[v]==1){
		if(!su)return f[u][v][su][sv]=0;
		return f[u][v][su][sv]=dp(v,u,0,su)+d[u][v];
	}
	int i,j,y,g[N];g[0]=1e9;
	fr(i,sv)g[i]=-1e9;
	for(int y:V[v])if(y!=u)
		for(i=sv;i;i--)for(j=1;j<=i;j++)
			g[i]=max(g[i],min(g[i-j],dp(v,y,sv+su-j,j)+d[v][y]));
	return f[u][v][su][sv]=g[sv];
}
int main(){
	rd(n);
	fr(i,n-1)scanf("%d%d%d",&x,&y,&z),ins(x,y,z),ins(y,x,z);
	rd(S);rd(m);
	fr(i,m)rd(x),sz[x]++;
	dfs(S,0);an=1e9;
	for(int y:V[S])an=min(an,dp(S,y,m-sz[y],sz[y])+d[S][y]);
	printf("%d",an);
}