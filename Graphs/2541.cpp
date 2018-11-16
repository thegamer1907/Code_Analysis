#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

vector<int> g[10010];

int cl[10010],cl2[10010],n,ans;

void change(int now,int fa,int c)
{
	cl2[now]=c;
	for(int i=0;i<g[now].size();i++)
	{
		if(fa==g[now][i])
		{
			continue;
		}
		change(g[now][i],now,c);
	}
}

void dfs(int now,int fa)
{
	if(cl[now]!=cl2[now])
	{
		ans++;
		change(now,fa,cl[now]);
	}
	for(int i=0;i<g[now].size();i++)
	{
		if(g[now][i]==fa)
		{
			continue;
		}
		dfs(g[now][i],now);
	}
}

int main()
{
	int tmp;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		scanf("%d",&tmp);
		g[i].push_back(tmp);
		g[tmp].push_back(i);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&cl[i]);
		cl2[i]=0;
	}
	dfs(1,0);
	printf("%d\n",ans);
}