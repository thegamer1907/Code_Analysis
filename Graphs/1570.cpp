#include <bits/stdc++.h>
using namespace std;

vector<int>g[100001];
bool vis[100001]={false};

void addedge(int a, int b)
{
	g[a].push_back(b);
}
void dfsutl(int u)
{
	int n, i;
	vis[u]=true;
	n=g[u].size();
	for(i=0; i<n; i++)
	{
		if(!vis[g[u][i]])
		{
			dfsutl(g[u][i]);
		}
	}
}
int main() {
	int n, t, i, a;
	scanf("%d %d", &n, &t);
	for(i=1; i<n; i++)
	{
		scanf("%d", &a);
		addedge(i, i+a);
	}
	dfsutl(1);
	if(!vis[t])
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}