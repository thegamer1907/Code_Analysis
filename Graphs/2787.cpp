#include<bits/stdc++.h>
using namespace std;

int n,m;

int col[100005];
bool exs[100005];

set<int> ada[100005];

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&col[i]);
		exs[col[i]]=1;
	}
	int ans = 0;
	int id = 0;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		if(col[u]==col[v]) continue;
		ada[col[u]].insert(col[v]);
		ada[col[v]].insert(col[u]);
		ans = max(ans,(int)ada[col[u]].size());
		ans = max(ans,(int)ada[col[v]].size());
	}
	for(int i=1;i<=100000;i++)
	{
		if(!exs[i]) continue;
		if(ans == ada[i].size())
		{
			printf("%d\n",i);
			return 0;
		}
	}
	return 0;
}
