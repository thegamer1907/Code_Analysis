#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

const int N=55;
const int M=105;
const int inf=1000000000;

int n,x,y,cnt,m,s,v,ans;
int dp[N][N][N][N],w[N],f[N][N];
vector<int> lev[M];

int dfs(int k,int pre){
	int u,sum=w[k];
	for (int j=0;j<lev[k].size();j++){
		u=lev[k][j];
		if (u==pre) continue;
		sum+=dfs(u,k);
	}
	return sum;
}

int solve(int u,int v,int k,int a){
	int to,i,j,l;
	if (dp[u][v][k][a]!=-1) return dp[u][v][k][a];
	if (!k){
		dp[u][v][k][a]=0;
		return 0;
	}
	if (lev[v].size()==1){
		dp[u][v][k][a]=solve(v,u,k-a,k-a)+f[u][v];
		return dp[u][v][k][a];
	}
	int g[M];
	memset(g,0x3f,sizeof(g));
	for (i=1;i<=m;i++) g[i]=-inf;
	for (i=0;i<lev[v].size();i++){
		to=lev[v][i];
		if (to==u) continue;
		for (j=a;j;j--)
			for (l=1;l<=j;l++) g[j]=max(g[j],min(g[j-l],solve(v,to,k,l)+f[u][v]));
	}
	dp[u][v][k][a]=g[a];
	return g[a];
}

int main(){
	int i,u;
	scanf("%d",&n);
	for (i=1;i<n;i++){
		scanf("%d%d%d",&x,&y,&v);
		lev[x].push_back(y);
		lev[y].push_back(x);
		f[x][y]=f[y][x]=v;
	}
	scanf("%d",&s); scanf("%d",&m);
	for (i=1;i<=m;i++){
		scanf("%d",&x);
		w[x]++;
	}
	memset(dp,-1,sizeof(dp));
	ans=inf;
	for (int j=0;j<lev[s].size();j++){
		u=lev[s][j];
		cnt=dfs(u,s);
		ans=min(ans,solve(s,u,m,cnt));
	}
	printf("%d\n",ans);
	return 0;
}