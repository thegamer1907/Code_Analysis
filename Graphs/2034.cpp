#include<bits/stdc++.h>
#define hell 1000000007LL
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mk make_pair
#define fi                  first
#define se                  second
#define pii                 pair<int,int>
#define all(c)              c.begin(),c.end()
#define sz(c)               (int)c.size()
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
bool cat[100004];
vector<int> adj[100005];
int cnt;
bool vis[100005];
void dfs(int x,int c,int m)
{
	vis[x]=1;
	if(cat[x])
		c++;
	else
		c=0;
	if(c>m)
		return;
	bool flag=0;
	for(int i=0;i<adj[x].size();i++)
	{
		if(vis[adj[x][i]]==0)
		{
			flag=1;
			dfs(adj[x][i],c,m);
		}
	}
	if(flag==0&&c<=m)
		cnt++;

}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	rep(i,1,n+1)
	{
		cin>>cat[i];
	}
	rep(i,0,n-1)
	{
		int a,b;
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	cnt=0;
	dfs(1,0,m);
	cout<<cnt;
	return 0;
}