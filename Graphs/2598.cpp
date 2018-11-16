#include<bits/stdc++.h>
using namespace std;
int mp[10010],root=1,ans=0;
struct gg{
	int fa;vector<int>son;
}pt[10010];vector<int>node[10010];
void dfs(int pos,int fa)
{
	pt[pos].fa=fa;
	for(int i=0;i<node[pos].size();i++)
		if(node[pos][i]!=fa)pt[pos].son.push_back(node[pos][i]),dfs(node[pos][i],pos);
	return;	
}
void ddfs(int pos,int color)
{
	int now=color;
	if(mp[pos]!=color)now=mp[pos],ans++;
	for(int i=0;i<pt[pos].son.size();i++)
		ddfs(pt[pos].son[i],now);
}
int main()
{
	int n,m,pos=0,to;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
		scanf("%d",&to),node[i].push_back(to),node[to].push_back(i);
	dfs(1,-1);
	for(int i=1;i<=n;i++)
		scanf("%d",&mp[i]);
	ddfs(1,-1);
	printf("%d",ans);	
}