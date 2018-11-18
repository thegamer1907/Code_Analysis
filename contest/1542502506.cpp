#include <bits/stdc++.h>
using namespace std;
const int N = 51;
vector<int>g[N];
int n,sz[N],dp[N][N][N][N],s,m,ans = 1e9,cost[N][N],temp[N];
void dfs(int u,int p){
	for(auto i : g[u])
		if(i != p)
			dfs(i,u),
			sz[u]+=sz[i];
}
int calc(int from,int to,int behind,int front){
	if(!front)return 1e9;
	if(g[to].size() == 1)return behind ? calc(to,from,0,behind) + cost[to][from] : cost[to][from];
	int &ref = dp[to][from][behind][front],temp[N];
	if(ref != -1)return ref;
	temp[0] = 1e9;
	for(int i = 1;i <= front;i++)temp[i] = -1e9;
	for(auto x : g[to]){
		if(x == from)continue;
		for(int i = front;i;i--)
			for(int j = 1;i - j >= 0;j++)temp[i] = max(temp[i],min(temp[i - j],calc(to,x,behind + front - j,j)));
	}
	return ref = temp[front] + cost[from][to];
}
int main(){
// 	freopen("readin.txt","r",stdin);
	scanf("%d",&n);
	memset(dp,-1,sizeof dp);
	for(int i = 1,a,b,c;i < n;i++){
		scanf("%d%d%d",&a,&b,&c);
		g[--a].push_back(--b);
		g[b].push_back(a);
		cost[a][b] = cost[b][a] = c;
	}
	temp[0] = 1e9;
	scanf("%d%d",&s,&m);
	for(int i = 0,a;i < m;i++){
		scanf("%d",&a);
		sz[a - 1]++;
	}
	dfs(--s,-1);
	for(auto i : g[s])ans = min(ans,calc(s,i,m - sz[i],sz[i]));
	printf("%d\n",ans);
}  