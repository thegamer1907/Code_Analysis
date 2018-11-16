#include <bits/stdc++.h>
using namespace std;
 
#define M 1000000007
 
#define mp make_pair
#define pb push_back
#define tri pair<int, pair<int, int> >
#define TRI(a,b,c) (make_pair(a,make_pair(b,c)))
 
typedef long long ll;
typedef long double ld;

vector<int> adj[2001];

int dfs(int u, int par)
{
	int mx=0;
	for(int v=0; v<adj[u].size(); v++)
	{
		if(adj[u][v]!=par)
		{
			mx=max(mx, dfs(adj[u][v], u));
		}
	}
	return 1+mx;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int par[n+1];
    for(int i=1; i<=n; i++)
    {
    	cin>>par[i];
    	if(par[i]!=-1)
    	{
    		adj[par[i]].pb(i);
    		adj[i].pb(par[i]);
    	}
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
    	if(par[i]==-1)
    	{
    		ans=max(ans, dfs(i, -1));
    	}
    }
    cout<<ans;
    return 0;
}