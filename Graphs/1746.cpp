#include<bits/stdc++.h>
using namespace std;

int n,t,e;
vector <int> adj[30010];
bool vis[30010];


void dfs(int n)
{
    vis[n] = true;
    for(int i = 0; i < adj[n].size(); i++){
        if(vis[adj[n][i]]==false){
            vis[adj[n][i]] = true;
            dfs(adj[n][i]);
        }
    }
}
int main()
{
    cin>>n>>t;
    for(int i = 1; i < n; i++){
        scanf("%d", &e);
        adj[i].push_back(i+e);
    }
    dfs(1);
    
    if(vis[t]==false) cout<<"NO";
    else cout<<"YES";
}
