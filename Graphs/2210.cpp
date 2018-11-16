// A simple representation of graph using STL,
// for the purpose of competitive programming
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll n;
ll s=0,m=-1; 
// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<ll> adj[], ll u, ll v)
{
    adj[v].pb(u);
}
 
// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(ll u, vector<ll> adj[],
                    vector<bool> &visited,ll r)
{
    visited[u] = true;
    ll z=adj[u].size();
    r++;
    m=max(r,m);
    for (ll i=0; i<z;i++)
        //if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited,r);
}
 
// This function does DFSUtil() for all 
// unvisited vertices.
void DFS(vector<ll> adj[], ll V)
{
    vector<bool> visited(V, false);
    for (ll u=1; u<=n; u++){
        if (visited[u] == false){
            DFSUtil(u, adj, visited,0);
            //cout<<u<<m<<"\n";
        }
    }  
}
 

int main()
{
    cin>>n;
    vector<ll> adj[n+1];
    for(ll j=1;j<=n;j++){
        ll y;
        cin>>y;
        if(y!=-1)
            addEdge(adj,j,y);
    }
    DFS(adj,n);
    cout<<max(m,(ll)1);
    return 0;
}