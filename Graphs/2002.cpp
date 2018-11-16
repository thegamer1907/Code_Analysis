// A simple representation of graph using STL,
// for the purpose of competitive programming
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll n,m;
ll c[300000+1];
//ll r=0,t=0;
ll s=0; 
// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<ll> adj[], ll u, ll v)
{
    adj[u].pb(v);
    adj[v].pb(u);
}
 
// A utility function to do DFS of graph
// recursively from a given vertex u.
void DFSUtil(ll u, vector<ll> adj[],
                    vector<bool> &visited,ll r,ll t)
{
    visited[u] = true;
    if(c[u]==1){
        if(t==1){
            r++;
        }
        else{
            r=1;
        }
        t=1;
    }
    else{
        t=0;
    }
    
    if(r>m){
        return;
    }
    ll z=adj[u].size();
    if(z==1&&u!=1){
        s++;
        //cout<<u<<" ";
        r=0;
        t=0;
        return;
    }
    for (ll i=0; i<z;i++)
        if (visited[adj[u][i]] == false)
            DFSUtil(adj[u][i], adj, visited,r,t);
}
 
// This function does DFSUtil() for all 
// unvisited vertices.
void DFS(vector<ll> adj[], ll V)
{
    vector<bool> visited(V, false);
    for (ll u=1; u<=1; u++)
        if (visited[u] == false)
            DFSUtil(u, adj, visited,0,0);
}
 

int main()
{
    cin>>n>>m;
    memset(c,0,sizeof(c));
    vector<ll> adj[n+1];
    for(ll i=1;i<=n;i++){
        ll z;
        cin>>z;
        c[i]=z;
    }
    for(ll j=0;j<n-1;j++){
        ll x,y;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    if(n==2&&c[1]==1&&c[2]==1){
        cout<<"0";
        return 0;
    }
    DFS(adj,n);
    cout<<s;
    return 0;
}