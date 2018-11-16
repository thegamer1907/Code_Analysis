#include<bits/stdc++.h>
using namespace std;
struct NODE {
	int fr,to,nxt;
};
NODE a[200005];
int head[100005],cat[100005];
bool vis[100005];
int n,m,ans;
void dfs(int o,int num){
	if (num>m)
		return;
	int p=head[o];
	vis[o]=true;
	bool flag=false;
	while (p!=-1){
		if (vis[a[p].to]){
			p=a[p].nxt;
			continue;
		}
		flag=true;
		int sum=0;
		if (cat[a[p].to])
			sum=num+cat[a[p].to];
		dfs(a[p].to,sum);
		p=a[p].nxt;
	}
	if (!flag)
		ans++;
}
void build(int o,int fr,int to){
	a[o].nxt=head[fr];
	a[o].fr=fr;
	a[o].to=to;
	head[fr]=o;
}
void solve(){
	memset(head,-1,sizeof(head));
	memset(vis,false,sizeof(vis));
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
		scanf("%d",&cat[i]);
	for (int i=0;i<n-1;i++){
		int fr,to;
		scanf("%d%d",&fr,&to);
		build(i<<1,fr,to);
		build(i<<1|1,to,fr);
	}
	ans=0;
	dfs(1,cat[1]);
	printf("%d\n",ans);
}
int main(){
	solve();
	return 0;
}
