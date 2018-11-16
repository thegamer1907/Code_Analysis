#include<bits/stdc++.h>
using namespace std;
const int N=1e5+100;

int n,m,f[N],a[N],d[N],ans;
int head[N],to[N<<1],nxt[N<<1],tot;

inline void lk(int u,int v)
{to[++tot]=v;nxt[tot]=head[u];head[u]=tot;}

void dfs(int x)
{
	if(a[x] && a[f[x]]) d[x]=d[f[x]]+1;
	else if(a[x]) d[x]=1;
	if(d[x]>m) return;int jud=1;
	for(int j,i=head[x];i;i=nxt[i]){
		j=to[i];if(j==f[x]) continue;
		jud=0;f[j]=x;dfs(j);
	}
	if(jud) ans++;
}

int main(){
	int i,j,x,y;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i) scanf("%d",&a[i]);
    for(i=1;i<n;++i){
    	scanf("%d%d",&x,&y);
    	lk(x,y);lk(y,x);
    }
    dfs(1);
    printf("%d\n",ans);
	return 0;
}