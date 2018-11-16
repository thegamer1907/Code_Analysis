#include <bits/stdc++.h>
using namespace std;
const int maxn=20005;
vector<int> G[maxn];
int vis[maxn], in[maxn], out[maxn],col[maxn],A[maxn], B[maxn];
int dfs_clock=0;
// void change(int )
// int dfs(int u){
// 	in[u]=++dfs_clock; A[dfs_clock]=col[u]; B[dfs_clock]=u;
// 	for(int i=0;i<G[u].size();i++){
// 		int v=G[u][i]; if(vis[v]) continue; vis[v]=1;
// 		dfs(v);
// 	}
// 	out[u]=dfs_clock;
// }
// int getnum(int u){
// 	printf("----- %d %d %d\n",u,in[u],out[u]);
// 	if(in[u]==out[u]) return 1;
// 	int l=in[u], r=out[u];
// 	int flag=1, ans=1;
// 	for(int i=l;i<r;i++) if(A[i]!=A[i+1]) flag=0;
// 	if(flag) return 1;
// 	for(int i=l+1;i<=r;i++){
// 		ans+=getnum(B[i]); i=out[B[i]]; 
// 	}
// 	return ans;
// }
int main(){
	int n,p;
	scanf("%d",&n);
	int ans=0;
	for(int i=2;i<=n;i++){
		scanf("%d",&p); G[i].push_back(p);
	}
	for(int i=1;i<=n;i++){ scanf("%d",&col[i]); }
	for(int i=1;i<=n;i++){
		for(int j=0;j<G[i].size();j++)
			if(col[i]!=col[G[i][j]]) ans++;
	}
	printf("%d\n",ans+1);
	// int q=1;
	// puts("================");
	// for(int i=1;i<=n;i++) printf("%d ",B[i]); puts("");
	// 	for(int i=1;i<=n;i++) printf("%d ",A[i]);puts("");
	// puts("================");
	// for(int i=2;i<=dfs_clock;i++){
	// 	if(A[i]==A[i-1]) continue;
	// 	else q++;
	// }
//	printf("%d\n",getnum(1));
	return 0;
}