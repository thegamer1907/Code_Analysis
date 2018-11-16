#include<stdio.h>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
vector<int> G[100005];
int dep[100005];
void Sech(int u, int p)
{
	int i, v;
	dep[u] = dep[p]+1;
	for(i=0;i<G[u].size();i++)
	{
		v = G[u][i];
		if(v==p)
			continue;
		Sech(v, u);
	}
}
int main(void)
{
	int n, i, x, ans;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &x);
		if(x==-1)
			dep[i] = 1;
		else
		{
			G[x].push_back(i);
			G[i].push_back(x);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(dep[i]==1)
			Sech(i, 0);
	}
	ans = 0;
	for(i=1;i<=n;i++)
		ans = max(ans, dep[i]);
	printf("%d\n", ans);
	return 0;
}