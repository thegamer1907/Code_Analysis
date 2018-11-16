#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>

using namespace std;
const int maxn=3e4+10;

int n,t,cnt,a[maxn],head[maxn];
bool vis[maxn];
struct Edge{int from,to,next,w;}edge[maxn];

void add(int u,int v){
	edge[++cnt].to=v;
	edge[cnt].next=head[u];
	head[u]=cnt;
}

bool bfs(int x){
	queue<int>q;
	q.push(1);
	vis[1]=true;
	while(q.size()){
		int u=q.front();q.pop();
		for(int i=head[u];i;i=edge[i].next){
			int v=edge[i].to;
			if(vis[v])continue;
			vis[v]=true;
			q.push(v);
		}
	}
	if(vis[x])return true;
	else return false;
}

int main(){
	cin>>n>>t;
	for(int i=1;i<=n-1;i++){
		scanf("%d",&a[i]);
		add(i,i+a[i]);
	}
	if(bfs(t))puts("YES");
	else puts("NO");
	return 0;
}