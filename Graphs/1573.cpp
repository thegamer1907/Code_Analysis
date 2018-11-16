#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//struct node
void dfs(vector<int> adj[],int u,bool visited[])
{
    visited[u]=1;
    for(int i=0;i<adj[u].size();i++)
    if(!visited[adj[u][i]])
    dfs(adj,adj[u][i],visited);
}
int main()
{
   int n;int t;
   cin>>n>>t;
   int a[n];
   for(int i=1;i<=n;i++)
   cin>>a[i];
   vector<int> adj[n+1];
   for(int i=1;i<=n-1;i++)
   {
       adj[i].push_back(i+a[i]);
   }
   bool visited[n+1]={0};
   dfs(adj,1,visited);
   if(visited[t])
   cout<<"YES";
   else
   cout<<"NO";
    return 0;
}