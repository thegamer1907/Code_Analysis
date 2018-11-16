#include<bits/stdc++.h>
using namespace std;
 vector<int> adj[1000000];
void addedge(int u,int v)
{
    adj[u].push_back(v);
}
void dfs(int u,int visited[])
{
    visited[u]=1;
    for(auto i=adj[u].begin();i!=adj[u].end();i++)
    {
        if(visited[*i]==0)
        dfs(*i,visited);
    }
    
}

main()
{
    int n,m;
    cin>>n>>m;
    int b[n];
  
    for(int i=1;i<n;i++) 
    cin>>b[i];
    for(int i=1;i<n;i++)
    {
     addedge(i,b[i]+i);
     
    }
    int visited[n+1]={0};
    dfs(1,visited);
    if(visited[m]==1) cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    
    
    
}

    