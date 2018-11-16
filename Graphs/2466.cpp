#include <bits/stdc++.h>
using namespace std;

int n,p,c[10003];
vector <int > adj[10003];
int count1,visited[100004];
	

void dfs(int u, int p)
{
	visited[u]=1;

	for(int i=0;i<adj[u].size();i++)
	{
		if(!visited[adj[u][i]])
		{
			visited[u]=1;
			dfs(adj[u][i],u);
		}
	}
	if(c[u]!=c[p] )
		count1++;
}


int main()
{	
	int i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		scanf("%d",&p);
		adj[i].push_back(p);
		adj[p].push_back(i);
	}

	for(i=1;i<=n;i++)
		scanf("%d",&c[i]);
	dfs(1,0);
	printf("%d\n",count1 );
	return 0;
}