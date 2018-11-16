#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<queue>
#define MN 40002
#define MM 5000001
#define ll long long
#define inf 0x7fffffff
#define clz 1000000007
#define ers(arr,val) memset(arr,val,sizeof(arr));
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define repd(i,b,a) for(int i=(b);i>=(a);i--)
#define repe(i,u) for(int i=h[u];i;i=e[i].nx)
using namespace std;
struct edge{
	int to,nx;
}e[5000001];
int h[10001],p;
void ae(int fr,int to){e[++p]=(edge){to,h[fr]};h[fr]=p;}
int n,v,c[10001],ans=0;
void dfs(int u,int fa,int col){
	if(c[u]!=col) ans++;
	repe(i,u){
		int v=e[i].to;
		if(v!=fa) dfs(v,u,c[u]);
	}
}
int main(){
	scanf("%d",&n);
	rep(i,2,n){
		scanf("%d",&v);
		ae(i,v);ae(v,i);
	}
	rep(i,1,n) scanf("%d",&c[i]);
	dfs(1,0,0);
	printf("%d",ans);
	return 0;
}
