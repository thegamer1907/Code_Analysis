#include<bits/stdc++.h>
using namespace std;
int i;
vector<vector<int>>g;
vector<bool>visit;
void edge(int a, int b)
{
	g[a].push_back(b);
}
void chkpath(vector<vector<int>>g, int t)
{
	queue<int>q;
	q.push(1);
	int f=0;
	while(!q.empty())
	{
		int y=q.front();
		q.pop();
		visit[y]=true;
		for(auto i=g[y].begin(); i!=g[y].end(); i++)
		{
			if(*i==t)
			{	f=1;
				cout<<"YES"<<" ";
				break;
			}
			if(!visit[*i])
			{q.push(*i);}
		}
	}
	if(f==0)
	{
		cout<<"NO";
	}
	
}
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n];
	visit.assign(n+1,false);
	g.assign(n+1,vector<int>());
	
	for(i=1; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<n; i++)
	{
		if(i+a[i]<=n)
		{
			edge(i, i+a[i]);
		}
	}
	chkpath(g,t);
	return 0;
}
