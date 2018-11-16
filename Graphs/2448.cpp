#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>adj[10010];
ll clr[10010],rc[10010];
ll vis[10010],cnt=0,n,q=0;
void dfsvis(ll u)
{
    vis[u]=q;
    if(adj[u].size()==0)
        return ;
    for(ll i=0;i<adj[u].size();i++){
        if(vis[adj[u][i]]!=q)
            dfsvis(adj[u][i]);
    }
    //for(ll i=1;i<=n;i++){
       // cout<<vis[i]<<" ";
   // }
    //cout<<endl;
}
void dfs()
{
    for(ll i=1;i<=n;i++){
        if(vis[i]!=rc[i])
        {
            q=rc[i];
            // cout<<q<<endl;
            cnt++;
            dfsvis(i);
        }
    }
}
int main()
{
   ll i,j,k;
   cin>>n;
   for(i=2;i<=n;i++){
        ll x;
   cin>>x;
    adj[x].push_back(i);
   }
   for(i=1;i<=n;i++){
    cin>>rc[i];
   }
   dfs();
   cout<<cnt<<endl;
   //for(i=1;i<=n;i++){
   // cout<<vis[i]<<" ";
  // }
}
/*
6
 1 2 2 1 5
 2 1 1 1 1 1
 7
 1 1 2 3 1 4
 3 3 1 1 1 2 3
 */
