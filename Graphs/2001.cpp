#include<bits/stdc++.h>
using namespace std;

int n,m,ans,t,c[200000],p[200000],x,y;
vector<int> v[200000];
bool a[200000],b[200000];

void dfs(int s)
{
	b[s]=1;
	if(a[s])
		c[s]=c[p[s]]+1;
	else
		c[s]=0;
	if(v[s].size()==1&&s!=1&&c[s]<=m)
		ans++;
	for(int i=0;i<v[s].size()&&c[s]<=m;i++)
	{
		if(!b[v[s][i]])
		{
			p[v[s][i]]=s;
			dfs(v[s][i]);
		}
	}
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);/*
	for(int i=1;i<=n;i++)
	{
		cout<<p[i]<<' ';
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<c[i]<<' ';
	}*/
	cout<<ans;
	return 0;
}