#include<iostream>
using namespace std;
bool vis[10001];
int n,cnt,want[10001],color[10001],h[10001],to[20001],nxt[20001];
inline void add(int x,int y){
	to[++cnt]=y;
	nxt[cnt]=h[x];
	h[x]=cnt;
}
int dfs(int now){
	int tot=0;
	vis[now]=true;
	if(color[now]!=want[now])
		tot++,color[now]=want[now];
	for(int i=h[now];i;i=nxt[i])
		if(!vis[to[i]]){
			color[to[i]]=color[now];
			tot+=dfs(to[i]);
		}
	return tot;
}
int main(){
	cin>>n;
	for(int i=2,to;i<=n;i++){
		cin>>to;
		add(i,to);
		add(to,i);
	}
	for(int i=1;i<=n;i++)
		cin>>want[i];
	cout<<dfs(1);
	return 0;
}