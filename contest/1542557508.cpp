#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

const int N=55; 
const int INF=1<<29; 

using namespace std;

int n,m,s; 
bool leaf[N]; 
int f[N<<1][N][N],cnt[N],deg[N]; 
struct edge{ int u,v,d,nxt; };
int tail,adj[N]; edge e[N<<1]; 

void addedge(int u,int v,int d){
	e[++tail]=(edge){u,v,d,adj[u]}; adj[u]=tail; 
	e[++tail]=(edge){v,u,d,adj[v]}; adj[v]=tail; 
}

void dfs(int u,int fa){ 
	for(int k=adj[u]; k!=-1; k=e[k].nxt){
		int v=e[k].v; 
		if(v==fa) continue;
		dfs(v,u); 
		cnt[u]+=cnt[v]; 
	}
}

int dp(int k,int s,int ts){
	int &F=f[k][s][ts]; 
	if(F!=INF) return F; 
	if(!s) return F=0; 
	int u=e[k].u; 
	int v=e[k].v; 
	int d=e[k].d; 
	if(leaf[v]) {
		F=d+dp(k^1,s-ts,s-ts); 
		return F; 
	}
	int l,r,mid,T,sum,put; 
	l=0; r=T=INF; 
	while(l<=r){
		mid=(l+r)/2; 
		sum=0; 
		for(int nk=adj[v]; nk!=-1; nk=e[nk].nxt){
			int nv=e[nk].v; 
			if(nv==u) continue; 
			for(put=1; put<=ts; ++put)
				if(dp(nk,s,put)<=mid){ break; }
			if(put==ts+1) { sum=ts; break; } 
			else { sum+=put-1; } 
			if(sum>=ts) { break; }
		}
		if(sum>=ts) l=mid+1;  
		else T=mid,r=mid-1; 
	}
	//二分的前提结论：在子树内的节点越少时间用的越多 
	return F=min(INF,d+T); 
}

int main() {
	int u,v,d,ans; 
	scanf("%d",&n);
	tail=1; for(int i=1;i<=n; ++i) adj[i]=-1;  
	for(int i=1; i<n; ++i){
		scanf("%d%d%d",&u,&v,&d); 
		addedge(u,v,d); 
		++deg[u]; 
		++deg[v]; 
	}
	for(int i=1; i<=n; ++i) leaf[i]=(deg[i]==1); 
	scanf("%d",&s);
	scanf("%d",&m);
	for(int i=1; i<=m; ++i){
		scanf("%d",&u);
		++cnt[u]; 
	}
	ans=INF; 
	for(int k=2; k<=tail; ++k)
		for(int i=0; i<=m; ++i)
			for(int j=0; j<=m; ++j) f[k][i][j]=INF; 
	dfs(s,0); 
	for(int k=adj[s]; k!=-1; k=e[k].nxt) 
		ans=min(ans,dp(k,m,cnt[e[k].v])); 
	if(ans==INF) printf("Terrorists win\n"); 
	else printf("%d\n",ans); 
	return 0; 
}