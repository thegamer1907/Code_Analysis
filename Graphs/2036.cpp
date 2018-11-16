#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,m,ans=0;
int a[200000];
bool visited[200000];
vector<int>adj[200000];
void dfs(int u,int cats)
{
    if(a[u]==1)
        cats++;
    else
        cats=0;
    if(cats>m)
        return;
    visited[u]=true;
    bool okay=false;
    for(auto v:adj[u])
    {
        if(!visited[v])
        {
            dfs(v,cats);
            okay=true;
        }
    }
    if(!okay)
        ans++;
}
signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        visited[i]=false;
    }
    for(int i=0;i<n-1;i++)
    {
         int x,y;
         cin>>x>>y;
         adj[x].push_back(y);
         adj[y].push_back(x);
    }
    dfs(1,0);
    cout<<ans;
}