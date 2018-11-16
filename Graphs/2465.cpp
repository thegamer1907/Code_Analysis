#include <cstdio>
#include <queue>
using namespace std;
const int N=1e4+7;
int n,ans,cnt;
int head[N],fa[N],col[N];
struct edge {
	int t,next;
}e[N];queue<int> q;
void add(int u,int t) {
	e[++cnt].t=t;e[cnt].next=head[u];head[u]=cnt;
}
void bfs(int x) {
	q.push(x);
	while (!q.empty()) {
		int u=q.front();q.pop();
		if (col[u]!=col[fa[u]]) ans++;
		for (int i=head[u];i;i=e[i].next) {
			int t=e[i].t;
			q.push(t);
		}
	}
}
int main() {
	scanf("%d",&n);
	for (int i=2;i<=n;i++) scanf("%d",&fa[i]),add(fa[i],i);
	for (int i=1;i<=n;i++) scanf("%d",&col[i]);
	bfs(1);
	printf("%d\n",ans);
}