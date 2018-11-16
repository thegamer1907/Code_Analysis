#include<bits/stdc++.h>
using namespace std;
vector<int>v[100001];
int val[100001];
int color[100001];
void dfs(int s,int p)
{
	if(color[s]!=color[p])
	{
		val[s]=1;
	}
	else
	{
		val[s]=0;
	}

	for(int i=0;i<v[s].size();i++)
	{
		int u=v[s][i];
		if(u!=p)
		{
			dfs(u,s);
		}
	}
}
int main()
{
	int n; cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x; cin>>x;
		v[x].push_back(i);
		v[i].push_back(x);
	}

	for(int i=1;i<=n;i++)
	{
		cin>>color[i];
	}
	color[0]=0;
	dfs(1,0);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=val[i];
	}
	cout<<ans<<endl;
	return 0;
}