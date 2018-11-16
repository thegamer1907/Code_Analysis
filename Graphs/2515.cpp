#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MOD 1000000007
#define f first
#define s second
#define pii pair<int,int>
vector<int> adj[10005];
int c[10005],vis[10005],ans=0;
void dfs(int i,int col)
{
    vis[i]=1;
    if(col!=c[i])
    ans++;
    for(int j=0;j<adj[i].size();j++)
    {
        if(!vis[adj[i][j]])
        {
            dfs(adj[i][j],c[i]);
        }
    }
}
int main()
{
   int n;
   cin>>n;
   for(int i=2;i<=n;i++)
   {
    int x;
    cin>>x;
    adj[x].push_back(i);
   }
   for(int i=1;i<=n;i++)
   cin>>c[i];
   dfs(1,0);
   cout<<ans;
   return 0;
}
