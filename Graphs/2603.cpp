#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

queue<int> Q;
int n,c[10005],p,ans;
vector<int> E[10005];
bool iq[10005];

void dfs(int x)
{
	for(int j=0;j<E[x].size();j++)
		if(c[E[x][j]]==c[x])
			dfs(E[x][j]);
		else
			Q.push(E[x][j]),iq[E[x][j]]=true;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<n;i++)
		scanf("%d",&p),E[p].push_back(i+1);
	for(int i=1;i<=n;i++)
		scanf("%d",&c[i]);
	Q.push(1);
	iq[1]=true;
	while(!Q.empty())
	{
		int u=Q.front();
		Q.pop();
		dfs(u);
	}
	for(int i=1;i<=n;i++)
		ans+=iq[i];
	printf("%d",ans);
	return 0;
}
