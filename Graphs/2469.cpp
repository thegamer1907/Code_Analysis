
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ff first
#define ss second


ll n,u,v,col[10005],cnt;
vector<ll> adj[10005];

void dfs(ll ver,ll par,ll color)
{
    if(col[ver]!=color)
        cnt++;
    for(ll i=0;i<adj[ver].size();++i)
    {
        ll re=adj[ver][i];
        if(re!=par)
           dfs(re,ver,col[ver]);
    }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin>>n;
  for(ll i=2;i<=n;++i)
  {
      cin>>u;
      adj[i].pb(u);
      adj[u].pb(i);
  }
  for(ll i=1;i<=n;++i)
    cin>>col[i];
cnt=0;
dfs(1,-1,-1);
cout<<cnt<<endl;
return 0;
}
