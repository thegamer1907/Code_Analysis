#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
const int M=1e5+5;
ll a[M],val[M];
int U[M],V[M];
vector<int> vtr[M];
int t=0;
void dfs(int x,int p,ll dist)
{
	if(dist>a[x])
		return ;
	t++;
	for(int i=0;i<vtr[x].size();i++)
	{
		int e=vtr[x][i];
		int u= U[e]==x ? V[e]:U[e];
		if(u!=p)
			dfs(u,x,max(dist+val[e],val[e]));
	}
}
int main()
{
	int n,i,u;
	cin>>n;
	ll x;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=2;i<=n;i++)
	{
		cin>>u>>x;
		U[i-1]=i;
		V[i-1]=u;
		val[i-1]=x;
		vtr[i].pb(i-1);
		vtr[u].pb(i-1);
	}
	dfs(1,0,0);
	cout<<n-t<<"\n";
	return 0;
}