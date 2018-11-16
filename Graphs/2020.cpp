#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<ll> adj[100005];
ll m,c[100005],ans=0;
bool b[100005];

void dfs(ll u,ll cn)
{
    b[u]=true;
    if(adj[u].size()==1&&u!=1) ans++;
    for(auto v:adj[u]) if(!b[v]&&((cn+c[v])*c[v])<=m) dfs(v,(cn+c[v])*c[v]);
}
 
int main() { ll t=1; 
fast
// cin>>t;
while(t--)
{ 
   ll i,j,k,n;
   cin>>n>>m;
   loop(i,1,n+1) cin>>c[i],b[i]=false;
   loop(i,1,n)
   {
       cin>>j>>k;
       adj[j].push_back(k);
       adj[k].push_back(j);
   }
   dfs(1,c[1]);
   cout<<ans;
}
    return 0;
} 