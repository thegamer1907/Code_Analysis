#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dfs(vector<vector<ll> >& g,vector<ll>& mark,ll src)
{
	ll i;
	mark[src]=1;
	for(i=0;i<g[src].size();i++)
	{
		ll x=g[src][i];
		if(mark[x]==0)
		{
			dfs(g,mark,x);
		}
	}
}

int main()
{
	ll n,i,j,d;
	cin>>n>>d;
	vector<vector<ll> >g(n+1);
	for(i=1;i<n;i++)
	{
		ll p;
		cin>>p;
		g[i].push_back(i+p);
	}
	
	vector<ll>mark(n+1);
	dfs(g,mark,1);
	if(mark[d]==0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	
	return 0;
}


