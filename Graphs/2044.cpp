#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool val[100002],vis[100002];
ll V,m,cnt=0;

void dfs(vector< list<ll> >&G,ll s,ll con)
{
	vis[s]=1;
	if(val[s]==1)
		con++;
	else 
		con=0;
	if(con>m)
		return;
	for(auto it=G[s].begin();it!=G[s].end();it++)
	{
		if(!vis[*it])
			dfs(G,*it,con);
	}
	if(s!=0 && G[s].size()==1)
		cnt++;
}

int main()
{
	ios::sync_with_stdio(0);
	ll E,i,j;
	cin >> V >> m ;
	E=V-1;
	vector< list<ll> >G(V);
	for(i=0;i<V;i++)
	{
		vis[i]=0;
		cin >> val[i];
	}
	for(i=0;i<E;i++)
	{
		ll x,y;
		cin >> x >> y;
		G[x-1].push_back(y-1);
		G[y-1].push_back(x-1);
	}
	dfs(G,0,0);
	cout << cnt << "\n";
	return 0;
}