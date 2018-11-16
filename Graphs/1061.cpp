#include<bits/stdc++.h>
using namespace std;
long long n,t;
void dfs(long long &s,vector<vector<long long>> &adj,vector<bool> &vis)
{
    vis[s]=true;
  for(int i=0;i<(int)adj[s].size();i++)
    {
        long long f=adj[s][i];
        if(!vis[f])
        {
        dfs(f,adj,vis);
        }
    }
}

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
   fast();
   //freopen("i.txt","r",stdin);
   cin>>n>>t;
   vector<vector<long long>>adj(n+6);
   vector<bool>vis(n+6,false);
 for(int i=0;i<n-1;i++)
 {
     int x;
     cin>>x;
     adj[i].push_back(x+i);
 }
long long g=0;
dfs(g,adj,vis);
 if(vis[t-1])
 {
     cout<<"YES";
 }
 else
 {
     cout<<"NO";
 }
    return 0;
}
