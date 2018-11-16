#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,x,y,cnt;
	cin>>n>>m;
	int a[n+5];
	for(i=0;i<n;i++)
		cin>>a[i];
	std::vector<int> t[n+5];
	for(i=0;i<n-1;i++)
	{
		cin>>x>>y;
		x--;
		y--;
		t[x].push_back(y);
		t[y].push_back(x);
	}
	stack<int> s;
	bool vis[n+5];
	int c[n+5];
	memset(c,0,sizeof(c));
	memset(vis,0,sizeof(vis));
	s.push(0);
	if(a[0]==1)
		c[0]=1;
	vis[0]=1;
	while(!s.empty())
	{
		x=s.top();
		s.pop();
		for(i=0;i<t[x].size();i++)
		{
			if(!vis[t[x][i]])
			{
				if(a[t[x][i]])
					c[t[x][i]]=c[x]+1;
				else
				{
					if(c[x]<=m)
						c[t[x][i]]=0;
					else
						c[t[x][i]]=1e9+7;
				}
				s.push(t[x][i]);
				vis[t[x][i]]=1;
			}
		}
	}
	cnt=0;
	for(i=0;i<n;i++)
	{
		// cout<<c[i]<<" ";
		if(c[i]<=m && t[i].size()==1 && i)
			cnt++;
	}
	cout<<cnt;
}