#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
const int maxn=3e4+10;
int to[maxn],nt[maxn],st[maxn],topt;
int n,t,x;
bool f,ff[maxn];
void add(int x,int y)
{
	to[++topt]=y;
	nt[topt]=st[x];
	st[x]=topt;
}
void dfs(int x)
{
	if (ff[x]) return ;
	ff[x]=1;
	if (x==t) {f=1; return ;}
	int p=st[x];
	while (p)
	{
		dfs(to[p]);
		p=nt[p];
	}
return;
}
int main()
{
	scanf("%d%d",&n,&t);
	for (int i=1;i<=n-1;i++) scanf("%d",&x),add(i,i+x);
	dfs(1);
	if (f) printf("YES");else printf("NO");
return 0;
}