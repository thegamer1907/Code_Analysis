#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,y,z;
	int a[20005];
	bool vis[20005];
	memset(vis,0,sizeof(vis));
	for(int i=0;i<=2e4+1;i++)
		a[i]=1e9+7;
	cin>>n>>m;
	if(n==m)
	{
		cout<<"0";
		return 0;
	}
	queue<int> q;
	q.push(n);
	a[n]=0;
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		y=2*x;
		if(y<=2*m)
		{
			if(!vis[y])
			{
				q.push(y);
				vis[y]=1;
			}
			a[y]=min(a[y],a[x]+1);
		}
		z=x-1;
		if(z>0)
		{
			if(!vis[z])
			{
				vis[z]=1;
				q.push(z);
			}
			a[z]=min(a[z],a[x]+1);
		}
		// if(z==5)
		// 	cout<<a[z]<<" ";
		if(y==m)
		{
			cout<<a[y];
			return 0;
		}
		if(z==m)
		{
			cout<<a[z];
			return 0;
		}
	}
}